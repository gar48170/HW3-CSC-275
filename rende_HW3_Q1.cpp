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

