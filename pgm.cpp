#include "pgm.hpp";
#include <iostream>
#include <fstream>
#include <new>

PGM::PGM()
{
    pixels = new (std::nothrow) int *[width];
    if (!pixels)
    {
        std::cout << "Memory error!";
        return ;
    }
    for (int i = 0; i < width; i++)
    {
        pixels[i] = new (std::nothrow) int [height];
        if(!pixels[i])
        {
        std::cout << "Memory error!";
        for (int j = 0; j < i; j++)
        {
            delete[] pixels[i];
        }
         delete [] pixels;
         return;
        }
    }
    
}

PGM::~PGM()
{
    for (int i = 0; i < width; i++)
    {
        delete[] pixels[i];
    }
    delete[] pixels;
}

void PGM::read(const char * name)//open
{
    std::ifstream file(name);
    if (!file.is_open())
    {
        std::cout << "File can't be open!";
        return;
    }
    
    file >> magicNumber >> width >> height >> maxValue;

    if (magicNumber != "P2" )
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
            file >> pixels[i][j];
        }
        
    }
    
    
}

/*Image *PGM::Clone() const
{
    return new PGM(*this);
}*/