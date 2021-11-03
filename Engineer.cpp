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