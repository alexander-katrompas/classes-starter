/*
 * This is a simple application to demonstrate classes and objects in C++.
 * Note the header structure and files for all cpp and h files.
 * The only thing included in main.cpp is it's main.h file.
 * This file, main.cpp, includes only main.h.
 */

/* 
 * File:   main.cpp
 * Author: Alex Katrompas
 */

#include "main.h"

int main(int argc, char** argv) {
    //creates a rectangle object with no parameters
    Rectangle myRectangle1;
    //creates a rectangle object with width and height 5x4
    Rectangle myRectangle2(5, 4);

    //creates a box object with no parameters
    Box myBox1;
    //creates a box object with width, height, depth 5x4x6
    Box myBox2(5, 4, 6);

    //examples of passing objects by reference
    displayRectangle(&myRectangle1);
    displayRectangle(&myRectangle2);

    displayBox(&myBox1);
    displayBox(&myBox2);

    return 0;
}
