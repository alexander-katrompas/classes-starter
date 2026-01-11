/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Demonstration Code
*  Purpose: This is a simple application to demonstrate classes and objects in C++.
*  Note the header structure and files for all cpp and h files.
*  The only thing included in main.cpp is it's main.h file.
*  This file, main.cpp, includes only main.h.
*  Instructional comments are for academic purposes and should
*  not be part of actual applications.
************************************************* */

#include "main.h"

int main() {
    /* **********************************
     * This function is the application driver. It uses
     * and tests the functions.py and Square.py modules.
     *
     * @param na : na
     * @return (int) : application exit code
     * @exception na : na
     * @note na
     * **********************************/
 
    // instructional comment: creates a rectangle object with no parameters
    Rectangle myRectangle1;
    // instructional comment: creates a rectangle object with width and height 5x4
    Rectangle myRectangle2(5, 4);  // remember, normally we do not use literals directly

    // instructional comment: creates a box object with no parameters
    Box myBox1;
    // instructional comment: creates a box object with width, height, depth 5x4x6
    Box myBox2(5, 4, 6);  // remember, normally we do not use literals directly

    // instructional comment: examples of passing objects by reference
    displayRectangle(&myRectangle1);
    displayRectangle(&myRectangle2);

    displayBox(&myBox1);
    displayBox(&myBox2);

    return 0;
}
