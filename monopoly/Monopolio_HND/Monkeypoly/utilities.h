#ifndef UTILITIES_H
#define UTILITIES_H

#include "properties.h"
#include <iostream>

using namespace std;

class Utilities : public Properties{
public:
    Utilities(string);
    void setRent(int);
};

#endif // UTILITIES_H
