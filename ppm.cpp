#include "ppm.hpp";
#include <iostream>
#include <fstream>
#include <new>

PPM::PPM()
{
    pixels = new (std::nothrow) int **[width];
    if (!pixels)
    {
        std::cout << "Memory error!";
        return ;
    }
    for (int i = 0; i < width; i++)
    {
        pixels[i] = new (std::nothrow) int * [height];
        
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

        for (int j = 0; j < height; j++)
        {
            pixels[i][j] = new (std::nothrow) int [3];
            if(!pixels[i][j])
            {   
            std::cout << "Memory error!";
            for (int k = 0; k < j; k++)
            {
                for (int l = 0; l < i; l++)
                {
                    delete[] pixels[i][j];
                }
                
                delete[] pixels[i];
            }
            delete [] pixels;
            return;
            }
        }
        
       
    }
    
}


PPM::~PPM()
{
    for (int i = 0; i < width; i++)
    {
        delete[] pixels[i];
    }
    delete[] pixels;
}

void PPM::read(const char * name) // open
{
    std::ifstream file(name);
    if (!file.is_open())
    {
        std::cout << "File can't be open!";
        return;
    }
    
    file >> magicNumber >> width >> height >> maxValue;

    if (magicNumber != "P3" )
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
            for (int s = 0; s < 3; s++)
            {
                file >> pixels[i][j][s]; 
            }
           
        }
        
    }
    
    
}

/*Image *PPM::Clone() const
{
    return new PPM(*this);
}*/