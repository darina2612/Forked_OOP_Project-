#include "image.hpp"

    Image::Image()
    {
        //?!?
    }

    Image::Image(Image const &other)
    {
        Copy(other);
    }

    Image::Image(Image && other)
    {
       Move(std::move(other));
    }

    Image &Image::operator =(Image const &other)
    {
        if(this == &other) return *this;
        //ако се отделят 2 класа за factory тук ще има промени
        Free();
        Copy(other);
        return *this;
    }

    Image &Image::operator =(Image && other)
    {
        if(this == &other) return *this;
        Free();
        Move(std::move(other));
        return *this;
    }

    Image::~Image()
    {
        Free();
    }

    void Image::Copy(Image const & other)
    {
        //промяна ако използвам factory
        filename = other.filename;
        magicNumber = other.magicNumber;
        height = other.height;
        width = other.width; 


    }

    void Image::Move(Image && other)
    {
        //промяна ако използвам factory
        filename = other.filename;
        std::exchange(other.filename,nullptr);
        magicNumber = other.magicNumber;
        std::exchange(other.magicNumber,nullptr);
        height = other.height;
        width = other.width; 
    }

    void Image::Free()
    {
        //вектор се справя сам с паметта си 
        //за magicNumber?
        
    }
