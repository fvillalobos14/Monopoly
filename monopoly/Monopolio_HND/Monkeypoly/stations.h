#ifndef STATIONS_H
#define STATIONS_H

#include "properties.h"
#include  <iostream>

using namespace std;

class Stations : public Properties{
public:
    Stations(string);
    void setRent();
};

#endif // STATIONS_H
