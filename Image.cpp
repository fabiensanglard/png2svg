#include "Image.h"
#include "ImageTGA.h"
#include "ImagePNG.h"

//Windows is not POSIX compliant. Those macro will use the right functions.
#if defined(_WIN32) || defined(_WIN64)
#define snprintf _snprintf
#define vsnprintf _vsnprintf
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#endif


Image::Image() :
colorPixels(NULL)
{
    
}

Image::~Image(){
}

const char* const PNG_EXTENSION = "PNG" ;
const char* const TGA_EXTENSION = "TGA" ;
Image* Image::LoadImage(const char* base, const char* filename){
    
    if (base == NULL || filename == NULL){
        printf("Image::GetImage Error: base or filename is NULL.\n");
        return NULL;
    }
    
    size_t sizeBase = strlen(base);
    size_t sizeFilename = strlen(filename);
    
    if (sizeFilename== 0){
        printf("Image::GetImage Error: Filename size is zero.\n");
        return NULL;
    }
    
    //This is bad but let's just trust the extension name;
    const char* extension = filename+strlen(filename);
    
    while (*extension != '.' && extension >= filename) {
        extension--;
    }
    extension++;
    
    if (extension < filename){
        printf("Image::GetImage Path has no extension: Cannot load an unknown image type.\n");
        return NULL;
    }
    
    Image* image = NULL;
    
    if(!strcasecmp(PNG_EXTENSION, extension)){
        ImagePNG* imagePNG = new ImagePNG();
		imagePNG->Init(base,filename);
        image = imagePNG;
    }
    
    if(!strcasecmp(TGA_EXTENSION, extension)){
        ImageTGA* imageTGA = new ImageTGA();
		imageTGA->Init(base,filename);
		image = imageTGA;
    }
    
    
    return image;
}