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