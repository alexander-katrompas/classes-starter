/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Classes and Objects Demonstration Code
*  Purpose: demonstrate passing by reference and
*  and a functions module and printing functions.
************************************************* */

#include "functions.h"

void displayRectangle(Rectangle *myRectangle){
    /* *************************************************
    This function accepts a rectangle object and prints
    information abuot the rectangle. Since is it a printing
    function, that is its only job.

    @param myRectangle : a Rectangle object
    @return na : na
    @exception na : na
    @note na
    * ************************************************* */
    std::cout << myRectangle->getWidth() << std::endl;
    std::cout << myRectangle->getHeight() << std::endl;
    std::cout << myRectangle->getArea() << std::endl;
    std::cout << std::endl;

}

void displayBox(Box *myBox){
    /* *************************************************
    This function accepts a Box object and prints
    information abuot the Box. Since is it a printing
    function, that is its only job.

    @param myBox : a Box object
    @return na : na
    @exception na : na
    @note na
    * ************************************************* */

    std::cout << myBox->getWidth() << std::endl;
    std::cout << myBox->getHeight() << std::endl;
    std::cout << myBox->getDepth() << std::endl;
    std::cout << myBox->getVolume() << std::endl;
    std::cout << myBox->getArea() << std::endl;
    std::cout << std::endl;

}
