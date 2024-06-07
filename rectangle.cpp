/* *************************************************
*  Name: Alexander Katrompas
*  Assignment: Classes and Objects Demonstration Code
*  Purpose: Demonstrating a simple class.  
*  
************************************************* */

#include "rectangle.h"

Rectangle::Rectangle() {
    /* *************************************************
    Default constructor for Rectangle. It accepts no parameters.

    @param na : na
    @return na : na
    @exception na : na
    @note When the contructor completes, the object should
          be fully ready for use. No further set-up needed.  
    * ************************************************* */
    
    // instructional comment: use your own setters!
    setWidth(MIN);
    setHeight(MIN);
}

Rectangle::Rectangle(int w, int h) {
    /* *************************************************
    Alternate constructor for Rectangle. It accepts parameters.

    @param (int) w : the width of the Rectangle
    @param (int) h : the height of the Rectangle
    @param (int) d : the depth of the Rectangle
    @return na : na
    @exception na : na
    @note When the contructor completes, the object should
          be fully ready for use. No further set-up needed.    
    * ************************************************* */
    
    // instructional comment: use your own setters!
    setWidth(w);
    setHeight(h);
}

Rectangle::~Rectangle() {
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

int Rectangle::getWidth() {
    /* *************************************************
    Returns the width.
    @param na : na
    @return (int) : the width of the Rectangle
    @exception na : na
    @note na
    * ************************************************* */
    return width;
}

int Rectangle::getHeight() {
    /* *************************************************
    Returns the height.
    @param na : na
    @return (int) : the height of the Rectangle
    @exception na : na
    @note na
    * ************************************************* */
    return height;
}

int Rectangle::getArea() {
    /* *************************************************
    Returns the area.
    @param na : na
    @return (int) : the area of the Rectangle
    @exception na : na
    @note the area is not stored as an attribute, it is
          calculated on the fly as needed. there is a
          positive and negative to this. what are they?
    * ************************************************* */

    return width * height;
}

void Rectangle::setHeight(int h) {
    /* *************************************************
    Sets the height of the Rectangle. Note the build in
    protections! Mutators must always protect attributes!

    @param (int) h : the height to be set
    @return na : na
    @exception na : na
    @note if height is invalid, the default MIN is used.
    * ************************************************* */
    if (h > MIN) {
        height = h;
    } else {
        height = MIN;
    }
}

void Rectangle::setWidth(int w) {
    /* *************************************************
    Sets the width of the Rectangle. Note the build in
    protections! Mutators must always protect attributes!

    @param (int) w: the width to be set
    @return na : na
    @exception na : na
    @note if width is invalid, the default MIN is used.
    * ************************************************* */
    if (w > MIN) {
        width = w;
    } else {
        width = MIN;
    }
}
