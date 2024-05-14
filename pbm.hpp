#ifndef __PBM_HPP
#define __PBM_HPP

#include "Image.hpp"

class PBM :public Image
{
public:
    PBM();
    ~PBM();

    //void setPixel(int w,int h);
    bool getPixel(int w,int h);

    void read (const char * name);

    //Image *Clone() const override;

private:
    char * magicNumber;
    int width;
    int height;
    bool ** pixels;//защото pbm изображенията се състоят само от 0 и 1

};

#endif