#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"

class Triangle: public Polygon
{
    public:
        Triangle(): Polygon() {};
        Triangle(int width, int height): Polygon(width, height) {};
        int getArea();
        void draw();
};

#endif // RETANGLE_H