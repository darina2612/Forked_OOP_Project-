#ifndef __FACTORY__HPP
#define __FACTORY__HPP
#include "pbm.hpp" 
#include "pgm.hpp"
#include "ppm.hpp"
#include "image.hpp"

enum class imageType
{
    PBM,
    PGM,
    PPM

};

Image *factory(imageType type);

#endif