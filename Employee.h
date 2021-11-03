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