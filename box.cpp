/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Classes and Objects Demonstration Code
*  Purpose: A class demonstrating inheritance. Box
*  inherits from square.  
*  
************************************************* */

#include "box.h"

Box::Box() {
    /* *************************************************
    Constructor for Box. This is the default constructor
    it takes no parameters.

    @param na : na
    @return na : na
    @exception na : na
    @note When the contructor completes, the object should
          be fully ready for use. No further set-up needed.
    * ************************************************* */
    
    // instructional comment: use your own setters!
    setWidth(MIN);
    setHeight(MIN);
    setDepth(MIN);
}

Box::Box(int w, int h, int d) {
    /* *************************************************
    Alternate constructor for Box. It accepts parameters.

    @param (int) w : the width of the box
    @param (int) h : the height of the box
    @param (int) d : the depth of the box
    @return na : na
    @exception na : na
    @note When the contructor completes, the object should
          be fully ready for use. No further set-up needed.    
    * ************************************************* */
    // instructional comment: use your own setters!
    setWidth(w);
    setHeight(h);
    setDepth(d);
}

Box::~Box() {
    /* *************************************************
    There is nothing for the destructor to do. This is
    just a stub and not needed.

    @param na : na
    @param na : na
    @return na : na
    @exception na : na
    @note na
    * ************************************************* */
}

int Box::getDepth(){
    /* *************************************************
    Returns the depth.
    @param na : na
    @return (int) : the depth of the Box
    @exception na : na
    @note na
    * ************************************************* */
    return depth;
}

int Box::getVolume() {
    /* *************************************************
    Returns the volume.
    @param na : na
    @return (int) : the volume of the Box
    @exception na : na
    @note the volume is not stored as an attribute,
          it is calculated on the fly as needed. there is a
          positive and negative to this. what are they?
    * ************************************************* */
    return width * height * depth;
}

int Box::getArea() {
    /* *************************************************
    Returns surface area overriding the getArea() of Rectangle
    since 2D area makes no sense for a box
    @param na : na
    @return (int) : the surfaced area of the Box
    @exception na : na
    @note the surface area is not stored as an attribute,
          it is calculated on the fly as needed. there is a
          positive and negative to this. what are they?
    * ************************************************* */
    return (2*(height * width)) + (2*(height * depth)) + (2*(width * depth));
}

void Box::setDepth(int d) {
    /* *************************************************
    Sets the depth of the Box. Note the build in
    protections! Mutators must always protect attributes!

    @param (int) d: the depth to be set
    @return na : na
    @exception na : na
    @note if depth is invalid, the default MIN is used.
    * ************************************************* */
    if (d > MIN) {
        depth = d;
    } else {
        depth = MIN;
    }
}
