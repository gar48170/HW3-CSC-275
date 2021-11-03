#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"

class Rectangle: public Polygon
{
    public:
        Rectangle(): Polygon() {};
        Rectangle(int width, int height): Polygon(width, height) {};
        int getArea();
        void draw();
};

#endif // RETANGLE_H