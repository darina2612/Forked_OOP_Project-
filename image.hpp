#ifndef __IMAGE_HPP
#define __IMAGE_HPP
#include <iostream>
#include <vector>

class Image 
{

public:
    Image();
    //Image(std::string &filename) : filename(fname);
    Image(Image const & other);
    Image(Image && other);
    Image &operator =(Image const &other);
    Image &operator =(Image && other);
    virtual ~Image();

    //може би трябва да се отдели в отделен клас само за изображенията 
    //този клас да бъде тип collection 
   // virtual Image *Clone() const = 0;

    virtual void open(const std::string &filename) = 0;
    virtual void save(const std::string &filename)const = 0;
    virtual void saveAs(const std::string &newFilename)const = 0;
    virtual void exit() = 0;


private:
//трябва ли да е с вектор
    std::vector <unsigned char> filename;
    std::string magicNumber;
    int width;
    int height;
    bool isOpen;

    void Copy(Image const &other);
    void Move(Image && other);
    void Free();

};
 
#endif