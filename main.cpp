#include<iostream>
#include "pbm.hpp"
#include "pgm.hpp"
#include "ppm.hpp"
#include "image.hpp"

int main()
{
    unsigned int choise;
    std::cout << "Hello! Please choose option:" << "\n";
    std::cout << "1.Open" << "\n" << "2.Load" << "\n" << "3.Grayscale" << "\n" << "4.Monochrome" << "\n" 
              << "5.Negative" << "\n" << "6.Rotate left" << "\n" <<"7.Rotate right" << "\n" << "8.Flip top" 
              << "\n" << "9.Flip left" << "\n" << "10.Undo" << "\n" << "11.Redo" << "\n" << "12.Add"
              << "\n" << "13.Crop" << "\n" << "14.List session" << "\n" << "15.Make collage" << "\n" 
              << "16.Save" << "\n" << "17.Save as" << "\n" << "18.Exit" << "\n" << "Enter choise:";        
    std::cin >> choise;

    switch (choise)
    {
    case 1:
        //std::cout << "1";
        break;
    case 2:
        //std::cout << "1";
        break;
    case 3:
        //std::cout << "1";
        break;
    case 4:
        //std::cout << "1";
        break;
    case 5:
        //std::cout << "1";
        break;
    case 6:
        //std::cout << "1";
        break;
    case 7:
        //std::cout << "1";
        break;
    case 8:
        //std::cout << "1";
        break;
    case 9:
        //std::cout << "1";
        break;
    case 10:
        //std::cout << "1";
        break;
    case 11:
        //std::cout << "1";
        break;
    case 12:
        //std::cout << "1";
        break;
    case 13:
        //std::cout << "1";
        break;
    case 14:
        //std::cout << "1";
        break;
    case 15:
        //std::cout << "1";
        break;
    case 16:
        //std::cout << "1";
        break;
    case 17:
        //std::cout << "1";
        break;
    case 18:
        //std::cout << "1";
        break;

    
    default:
        break;
    }  
}
