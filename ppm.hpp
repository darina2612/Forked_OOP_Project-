#ifndef __PPM_HPP
#define __PPM_HPP

#include "Image.hpp"

class PPM : public Image 
{
public:
    PPM();
    ~PPM();

    void read (const char * name);
   // Image *Clone() const override;

private:
    char* magicNumber;
    int width;
    int height;
    int *** pixels;
    int maxValue;

};

#endif