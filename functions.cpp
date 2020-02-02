/*
 * 
 * 
 * 
 * 
 */

/* 
 * File:   functions.cpp
 * Author: Alex Katrompas
 */

#include "functions.h"

void displayRectangle(Rectangle *myRectangle){

    std::cout << myRectangle->getWidth() << std::endl;
    std::cout << myRectangle->getHeight() << std::endl;
    std::cout << myRectangle->getArea() << std::endl;
    std::cout << std::endl;

}

void displayBox(Box *myBox){

    std::cout << myBox->getWidth() << std::endl;
    std::cout << myBox->getHeight() << std::endl;
    std::cout << myBox->getDepth() << std::endl;
    std::cout << myBox->getVolume() << std::endl;
    std::cout << myBox->getArea() << std::endl;
    std::cout << std::endl;

}