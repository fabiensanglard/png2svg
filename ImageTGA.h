#ifndef __ImageTGA__
#define __ImageTGA__

#include "Image.h"

class ImageTGA: public Image {
public:
    
    ImageTGA();
    ~ImageTGA();
    
    void Init(const char* base, const char* filename);
    
private:
    
    
};

#endif