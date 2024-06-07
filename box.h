/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Classes and Objects Demonstration Code
*  Purpose: A class demonstrating inheritance. Box
*  inherits from square.
*  
************************************************* */

#ifndef CLASSES_BOX_H
#define CLASSES_BOX_H

#include "rectangle.h"

class Box : public Rectangle {
public:
    /**********************
    Constructors/Destructor
    ***********************/
    Box();
    Box(int, int, int);
    ~Box();

    /**********************
    Getters/Accessors
    ***********************/
    int getDepth();
    int getVolume();
    int getArea();

    /**********************
    Setters/Mutators
    ***********************/
    void setDepth(int);

private:
    int depth;
};

#endif //CLASSES_BOX_H

