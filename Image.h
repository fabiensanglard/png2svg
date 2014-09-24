#ifndef __Image9__
#define __Image9__

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

class Image{
    
public:
                
    static Image* LoadImage(const char* base, const char* filename);
    
    size_t GetHeight(void){ return this->height;}
    size_t GetWidth(void) { return this->width ;}
    uint8_t* GetBytes(void) { return this->colorPixels ;}
    size_t GetBpp(void){ return this->bpp;}
    const char* GetFullPath(void){ return this->fullPath;}
    const char* GetFilename(void){ return this->filename;}
    
    virtual ~Image();

private:
    
protected:
    
    size_t width;
    size_t height;
    uint8_t* colorPixels;
	size_t bpp;
	size_t bytesPerRow;
    
    Image();
    
    char filename[512];
    char fullPath[512];

    
};

#endif