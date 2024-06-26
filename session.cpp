#include "session.hpp"

Session::Session (std::vector<char> &filename)
{
//factory?
//трябва да създава изображение от правилния тип и да го запише във вектора

    //Тук за всеки файл от списъка трябва да се извика factory-то, за да се създаде обект от съответния тип.
    // В images вектора ще се добавят указателите към създадените обекти.
}

// Сесията трябва да има някакъв начин отвън да й се казва да execute-не еди-коя си команда и тя да вика съответния на тази команда метод на image-ите.
// Един начин е това, което си направила, само че вместо processImage(), по-скоро processCommand(string command) (например), където да се подава командата по име
// и спрямо името на командата да се извиква съответния метод.  
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
