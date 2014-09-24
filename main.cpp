#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Image.h"

void ConvertPNGToSVG(const char* srcPath,const char* dstPath){
    Image* image  = Image::LoadImage("",srcPath);
    if (image == NULL){
    	printf("Cannot to load Image '%s': skipping.\n",srcPath);
    	return;
    }
    printf("Loaded image %s dimension [%lu.%lu]\n",srcPath,image->GetWidth(),image->GetHeight());

    printf("Starting generation of '%s'\n",dstPath);
    FILE* svgFile = fopen(dstPath,"w");
    fprintf(svgFile,"<?xml version=\"1.0\"?>\
     <svg width=\"%lu\" height=\"%lu\" \
      viewPort=\"0 0 %lu %lu\"\
       version=\"1.1\"\
        xmlns=\"http://www.w3.org/2000/svg\">\n",image->GetWidth(),image->GetHeight(),image->GetWidth(),image->GetHeight());
    
    uint8_t* bytes = image->GetBytes();

    for(int i=0 ; i < image->GetHeight()-1 ; i++)
    for(int j=0 ; j < image->GetWidth() -1 ; j++)
    {
        uint8_t red   = bytes[(i*image->GetWidth()+j)*image->GetBpp()+0];
    	uint8_t green = bytes[(i*image->GetWidth()+j)*image->GetBpp()+1];
    	uint8_t blue  = bytes[(i*image->GetWidth()+j)*image->GetBpp()+2];
    	

        fprintf(svgFile,"<rect fill=\"#%02x%02x%02x\" x=\"%d\" y=\"%d\" width=\"%.1f\" height=\"%.1f\" />\n",red,green,blue,j,i,1.5,1.5);
    }


    //Last line
    for(int i=image->GetHeight()-1 ; i < image->GetHeight() ; i++)
    for(int j=0 ; j < image->GetWidth()-1  ; j++)
    {
        uint8_t red   = bytes[(i*image->GetWidth()+j)*image->GetBpp()+0];
    	uint8_t green = bytes[(i*image->GetWidth()+j)*image->GetBpp()+1];
    	uint8_t blue  = bytes[(i*image->GetWidth()+j)*image->GetBpp()+2];

        fprintf(svgFile,"<rect fill=\"#%02x%02x%02x\" x=\"%d\" y=\"%d\" width=\"%.1f\" height=\"%d\" />\n",red,green,blue,j,i,1.5,1);
    }

    //Last column
    for(int i=0 ; i < image->GetHeight()-1 ; i++)
    for(int j=image->GetWidth() ; j < image->GetWidth()-1  ; j++)
    {
        uint8_t red   = bytes[(i*image->GetWidth()+j)*image->GetBpp()+0];
    	uint8_t green = bytes[(i*image->GetWidth()+j)*image->GetBpp()+1];
    	uint8_t blue  = bytes[(i*image->GetWidth()+j)*image->GetBpp()+2];

        fprintf(svgFile,"<rect fill=\"#%02x%02x%02x\" x=\"%d\" y=\"%d\" width=\"%d\" height=\"%.1f\" />\n",red,green,blue,j,i,1,1.5);
    }

        uint8_t red   = bytes[(image->GetHeight()*image->GetWidth()-1)*image->GetBpp()+0];
    	uint8_t green = bytes[(image->GetHeight()*image->GetWidth()-1)*image->GetBpp()+1];
    	uint8_t blue  = bytes[(image->GetHeight()*image->GetWidth()-1)*image->GetBpp()+2];
    fprintf(svgFile,"<rect fill=\"#%02x%02x%02x\" x=\"%lu\" y=\"%lu\" width=\"%d\" height=\"%d\" />\n",red,green,blue,image->GetWidth() -1,image->GetHeight()-1,1,1);


    fprintf(svgFile,"</svg>");
    fclose(svgFile);
}

void ConvertToSVG(const char* srcPath){
	
	//Create new file with extension
    char dstPath[256];

    int i = 0;
    while(i < srcPath[i] != '\0' && srcPath[i] != '.' ){
       dstPath[i] = srcPath[i] ;
       i++;
    }
    dstPath[i] = '\0';
    strcat(dstPath,".svg");

	ConvertPNGToSVG(srcPath,dstPath);
}

int main(int argc, char** argv){
	if (argc < 2){
	   printf("Usage: %s [png_files]\n",argv[0]);
	   return EXIT_FAILURE;
	}

	for(int i=1; i < argc ; i++){
        ConvertToSVG(argv[i]);
	}

	return EXIT_SUCCESS;
}