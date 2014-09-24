#ifndef __ImagePNG__
#define __ImagePNG__

#include "Image.h"

class ImagePNG: public Image {
public:
    
    ImagePNG();
    ~ImagePNG();

	void Init(const char* base, const char* filename);
    
private:
};

#endif