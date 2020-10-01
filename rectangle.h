/*
 * 
 * 
 * 
 * 
 */

/* 
 * File:   rectangle.h
 * Author: Alex Katrompas
 */

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#define MIN 0

class Rectangle {

    public:
    /*
     * constructors
     * one with no params, one with params (overloading)
     */
    Rectangle();
    Rectangle(int, int);

    //destructor (not used in this example)
    ~Rectangle();

    /*
     * Getters
     */
    int getWidth();
    int getHeight();
    int getArea();

    /*
     * Setters
     */
    void setWidth(int);
    void setHeight(int);

protected:
    //private variables that define a square
    int width, height;

};

#endif //CLASSES_RECTANGLE_H
