#include "session.hpp"

Session::Session (std::vector<char> &filename)
{
//factory?
//трябва да създава изображение от правилния тип и да го запише във вектора
}

void Session::processImage()
{
    for(Image* image : image)
    {
        image->функция?();
        //трябва да взима функцията от типа който ми трябва
        //може да е една функция с цикъл и спрямо въведената команда да вика друга функция
        //може и това да е в main
    }
}

Session::~Session()
{
    for(Image* image : image)
    {
        delete image;
    }
}
