#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Engineer.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Employee emp("Steve", "Rogers", 1, 21, 1910, "Worker");
    cout << emp.whatAmI() << endl;

    Engineer eng("Bruce", "Banner", 1, 10, 1947, "Electrical Engineer", "Nanobots");
    cout << eng.whatAmI() << endl;

    Rectangle rect(10, 5);
    rect.draw();

    Triangle tri(10, 5);
    tri.draw();

    return 0;
}

#include "Engineer.h"
#include <sstream>
using namespace std;

string Engineer::getSpecialty() {
    return specialty;
}

string Engineer::whatAmI() {
    ostringstream ret;
    ret << "I am a " << getPosition() << " specialized in " << getSpecialty();
    return ret.str();
}

#include "Employee.h"
#include <sstream>
using namespace std;

string Employee::getPosition() {
    return position;
}

string Employee::whatAmI(){
    ostringstream ret;
    ret << "I am a " << getPosition();
    return ret.str();
}

#include "Person.h"
#include <sstream>
using namespace std;

Person::Person()
{
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
}

Person::Person(string first, string last, int day, int month, int year){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
}

string Person::getName(){
    return Fname + " " + Lname;
}

string Person::getBirthdate(){
    ostringstream bday;
    bday << birthDay << "/" << birthMonth << "/" << birthYear;
    return bday.str();
}

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

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
class Employee: public Person
{
    public:
    Employee(): Person("", "", 1, 1, 1)
    {
        position = "";
    };
    Employee(std::string first, std::string last, int year, int day, int month, std::string pos): Person(first, last, year, day, month)
    {
        position = pos;
    };

    std::string getPosition();
    std::string whatAmI();

    private:
        std::string position;

};
#endif // EMPLOYEE_H

#ifndef ENGINEER_H
#define ENGINEER_H
#include "Employee.h"
#include <string>
class Engineer: public Employee
{
    public:
        Engineer(): Employee("", "", 1, 1, 1, "Worker")
        {
            specialty = "Engineer";
        };
        Engineer(std::string first, std::string last, int year, int day, int month, std::string pos, std::string spec): Employee(first, last, year, day, month, pos)
        {
            specialty = spec;
        }

    public:
        std::string specialty;
        std::string getSpecialty();
        std::string whatAmI();
};

#endif


#define PERSON_H
#include <string>

class Person
{
    public:
        Person();
        Person(std::string first, std::string last, int year, int day, int month);
        std::string getName();
        std::string getBirthdate();

    private:
        std::string Fname;
        std::string Lname;
        int birthDay;
        int birthMonth;
        int birthYear;

    protected:
    /*You may move private members to protected if needed*/


};

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

#endif // RETANGLE_H

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


