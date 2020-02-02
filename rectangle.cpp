/*
 * 
 * 
 * 
 * 
 */

/* 
 * File:   rectangle.cpp
 * Author: Alex Katrompas
 */

#include "rectangle.h"

Rectangle::Rectangle() {
    //use your own setters!
    setWidth(0);
    setHeight(0);
}

Rectangle::Rectangle(int w, int h) {
    //use your own setters!
    setWidth(w);
    setHeight(h);
}

Rectangle::~Rectangle() {
}

int Rectangle::getWidth() {
    return width;
}

int Rectangle::getHeight() {
    return height;
}

int Rectangle::getArea() {
    return width * height;
}

void Rectangle::setHeight(int h) {
    //setters are where you keep your protections for attributes
    if (h > 0) {
        height = h;
    } else {
        height = 0;
    }
}

void Rectangle::setWidth(int w) {
    //setters are where you keep your protections for attributes
    if (w > 0) {
        width = w;
    } else {
        width = 0;
    }
}