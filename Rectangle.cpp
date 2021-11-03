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