
#include "png.h"
#include "ImagePNG.h"
#include <stdlib.h>

FILE* file = NULL;

void png_zip_read(png_structp png_ptr, png_bytep data, png_size_t length)
{
    fread(data,1, length,file);
}

ImagePNG::ImagePNG(){
}

void ImagePNG::Init(const char* base, const char* filename){
    
    
    fullPath[0] = '\0';
    strcat(fullPath, base);
    strcat(fullPath, filename);
    
    strncpy(this->filename, filename,512);
    
    file = fopen(fullPath, "rb");
    
    if (file == NULL){
        printf("ImagePNG::Init => Unable to open image '%s'.\n",fullPath);
        return;
    }
 
  
    
    png_byte header[8];
    fread(header,1, 8,file);
    
	if (png_sig_cmp(header, 0, 8) != 0 ){
		printf("[read_png_file] File '%s' is not recognized as a PNG file.\n", fullPath);
        return;
    }
    
	// initialize
    png_structp     png_ptr = NULL;
	png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
    
	if (png_ptr == NULL){
		printf("[read_png_file] png_create_read_struct failed");
        return;
    }
    
	png_infop       info_ptr = png_create_info_struct(png_ptr);
    if (info_ptr == NULL){
		printf("[read_png_file] png_create_info_struct failed");
        return;
    }
               
	if (setjmp(png_jmpbuf(png_ptr))){
		printf("[read_png_file] Error during init_io");
        return;
    }
    
	png_set_read_fn(png_ptr, NULL, png_zip_read);
	png_set_sig_bytes(png_ptr, 8);
    
	png_read_info(png_ptr, info_ptr);
    
    //Retrieve metadata and transfer to structure bean tmpTex
    int32_t             bit_depth;
	int32_t             color_type ;
    unsigned int    pngWidth;
	unsigned int    pngHeight;
	png_get_IHDR(png_ptr, info_ptr, &pngWidth, &pngHeight, &bit_depth, &color_type, NULL, NULL, NULL);
    
	this->width =   pngWidth;
	this->height =  pngHeight;
    
	// Set up some transforms.
	/*if (color_type & PNG_COLOR_MASK_ALPHA) {
     png_set_strip_alpha(png_ptr);
     }*/
	if (bit_depth > 8) {
		png_set_strip_16(png_ptr);
	}
	if (color_type == PNG_COLOR_TYPE_GRAY ||
		color_type == PNG_COLOR_TYPE_GRAY_ALPHA) {
		png_set_gray_to_rgb(png_ptr);
	}
	if (color_type == PNG_COLOR_TYPE_PALETTE) {
		png_set_palette_to_rgb(png_ptr);
	}
    
	// Update the png info struct.
	png_read_update_info(png_ptr, info_ptr);
    
	// Rowsize in bytes.
	this->bytesPerRow = png_get_rowbytes(png_ptr, info_ptr);
	// glTexImage2d requires rows to be 4-byte aligned
    bytesPerRow += 3 - ((bytesPerRow-1) % 4);


  	this->bpp= bytesPerRow / width;
    
	printf("ImagePNG::Init: For '%s', bpp: %zu, color_type: %d, bit_depth: %d\n", filename, bpp, color_type, bit_depth);
    
    this->colorPixels = new uint8_t[bytesPerRow * height];
    
    //Next we need to send to libpng an array of pointer where to decompress the RGB values
    png_bytep       *row_pointers;
	row_pointers = (png_bytepp)malloc(height*sizeof(png_bytep)) ;
    
    /*
         We work with PNG in top to bottom layout (wiht origin coordinate 0,0 in upper left).
         Decompress the image normally.
     */
	for (size_t i = 0;  i < height;  ++i)
		//row_pointers[height - 1 - i] =  this->colorPixels  + i*bytesPerRow;
        row_pointers[             i] = this->colorPixels + i*bytesPerRow;
    
    
    //Decompressing PNG to RAW where row_pointers are pointing (tmpTex->data[0])
	png_read_image(png_ptr, row_pointers);
    
	// Free LIBPNG internal state.
	png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
    
    //Free the decompression buffer
    free(row_pointers);
   
    
    fclose(file);
}

ImagePNG::~ImagePNG(){
   delete[] colorPixels;
}