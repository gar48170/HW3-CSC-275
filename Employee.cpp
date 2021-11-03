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