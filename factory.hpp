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

//Предлагам да се направи един метод, който да определя типа на файла на базата на filename, на разширението по-конкретно.
//Така ще може factory-то да взмеа filename, да определя типа и да създаде обект от правилния тип с направо зареден файл (това след като се добави конструктор с файл на image класовете) 
Image *factory(imageType type);

#endif
