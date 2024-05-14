#include "factory.hpp"
#include "pbm.hpp" 
#include "pgm.hpp"
#include "ppm.hpp"
#include "image.hpp"

Image *factory(imageType type)
{
    switch (type)
    {
    case imageType::PBM:
        return new PBM;
    case imageType::PGM:
        return new PGM;
    case imageType::PPM:
        return new PPM;
    
    default:
        return nullptr;
    }
}
