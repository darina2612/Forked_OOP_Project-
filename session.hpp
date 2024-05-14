#ifndef __SESSION__HPP
#define __SESSION__HPP
#include "image.hpp" 

class Session
{

public:
//подават се имената за файловете който трябва да се заредят 
    Session (std::vector<char> &filename);//char ili string 
    ~Session();

    void processImage();

private:
    std::vector<Image*> images;
    int sessionID=0;
    int sessionCount=0;
};

#endif