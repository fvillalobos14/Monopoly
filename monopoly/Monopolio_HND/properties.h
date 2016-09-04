#ifndef PROPERTIES_H
#define PROPERTIES_H

#include "carta.h"
#include <iostream>

using namespace std;

class Properties : public Carta{

protected:
    string type;
    int rent, quantity;

public:
    Properties(string);
    string getType();
    int getRent();
    void setRent(int r);
    int getQuantity();
    void setQuantity(int c);
};

#endif // PROPERTIES_H
