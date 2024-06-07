/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Classes and Objects Demonstration Code
*  Purpose: Demonstrating a simple class.  
*  
************************************************* */

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#define MIN 0

class Rectangle {

    public:
    /**********************
    Constructors/Destructor
    ***********************/
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();

    /**********************
    Getters/Accessors
    ***********************/
    int getWidth();
    int getHeight();
    int getArea();

    /**********************
    Setters/Mutators
    ***********************/
    void setWidth(int);
    void setHeight(int);

protected:
    int width, height;
};

#endif //CLASSES_RECTANGLE_H

