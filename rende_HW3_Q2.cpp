#include "Polygon.h"

Polygon::Polygon()
{
    //ctor
    width = 0;
    height = 0;
}
Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}
void Polygon::setWidth(int newWidth){
    width = newWidth;
}
void Polygon::setHeight(int newHeight){
    height = newHeight;
}

#include "Rectangle.h"
#include <iostream>
using namespace std;

int Rectangle::getArea()
{
    return width*height;
}
void Rectangle::draw() {

    // For each row i from 0 to height-1, draw width asterisks
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

#include "Triangle.h"
#include <iostream>
using namespace std;

int Triangle::getArea()
{
    return width*height;
}
void Triangle::draw() {

    // Draw a triangle of the defined height.
    int finalWidth = 2*height-1;
    for(int i = 0; i < height; i++)
    {
        int stars = 2*(i+1)-1;
        int spaces = (finalWidth - stars)/2;

        for(int j = 0; j < spaces; j++)
            cout << " ";
        for(int j = 0; j < stars; j++)
            cout << "*";
        for(int j = 0; j < spaces; j++)
            cout << " ";

        cout << endl;
    }
}


