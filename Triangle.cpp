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