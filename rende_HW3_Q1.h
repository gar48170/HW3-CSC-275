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

#ifndef PERSON_H
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

