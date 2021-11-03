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