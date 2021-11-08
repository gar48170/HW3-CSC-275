#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
    public:
        Polygon();
        Polygon(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        virtual int getArea() {return width*height;};
        virtual void draw() {};

    protected:
        int width = 0;
        int height = 0;

};

#endif // POLYGON_H

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
C
#endif // RECTANGLE_H

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

#endif // TRIANGLE_H
