/*
 * 
 * 
 * 
 * 
 */

/* 
 * File:   box.cpp
 * Author: Alex Katrompas
 */

#include "box.h"

Box::Box() {
    //use your own setters!
    setWidth(MIN);
    setHeight(MIN);
    setDepth(MIN);
}

Box::Box(int w, int h, int d) {
    //use your own setters!
    setWidth(w);
    setHeight(h);
    setDepth(d);
}

Box::~Box() {
}

int Box::getDepth(){
    return depth;
}

int Box::getVolume() {
    return width * height * depth;
}

int Box::getArea() {
    /*
     * This returns surface area overriding the getArea() of Rectangle
     * since 2D area makes no sense for a box
    */
    return (2*(height * width)) + (2*(height * depth)) + (2*(width * depth));
}

void Box::setDepth(int d) {
    //setters are where you keep your protections for attributes
    if (d > MIN) {
        depth = d;
    } else {
        depth = MIN;
    }
}
