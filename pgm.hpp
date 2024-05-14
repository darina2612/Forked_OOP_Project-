#ifndef __PGM_HPP
#define __PGM_HPP

#include "Image.hpp"

class PGM : public Image
{
public:
    PGM();
    ~PGM();


    void read (const char * name);
    //Image *Clone() const override;

private:
    char * magicNumber;
    int width;
    int height;
    int ** pixels;
    int maxValue;

};

#endif