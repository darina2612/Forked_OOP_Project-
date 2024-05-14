#include "pbm.hpp"
#include <iostream>
#include <fstream>
#include <new>

PBM::PBM()
{
    pixels = new (std::nothrow) bool*[width];
    if (!pixels)
    {
        std::cout << "Memory error!";
        return ;
    }
    for (int i = 0; i < width; i++)
    {
        pixels[i] = new (std::nothrow) bool [height];
        if(!pixels[i])
        {
        std::cout << "Memory error!";
        for (int j = 0; j < i; j++)
        {
            delete[] pixels[i];
        }
         delete [] pixels;
        return ;   
        }
    }
    
}

PBM::~PBM()
{
    for (int i = 0; i < width; i++)
    {
        delete[] pixels[i];
    }
    delete[] pixels;
}

bool PBM::getPixel(int w,int h)
{
        if (w >= 0 && w < width && h >= 0 && h < height)
        {
            return pixels[width][height];
            return false;
        }
        
}

void PBM::read(const char * name)//open
{
    std::ifstream file(name);
    if (!file.is_open())
    {
        std::cout << "File can't be open!";
        return;
    }
    
    file >> magicNumber >> width >> height;

    if (magicNumber != "P1" )
    {
        std::cout << "Erorr! Invalid format!";
        return;
    }

    while (file.peek() == '#' )
    {
        file.ignore(1000, '\n');
    }
    
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            int pixelValue;
            file >> pixelValue;
            pixels[i][j] = (pixelValue == 1);
        }
        
    }
    
    
}

/*Image *PBM::Clone() const
{
    return new PBM(*this);
}*/