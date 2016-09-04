#ifndef PROPERTIES_H
#define PROPERTIES_H

#include "carta.h"
#include <iostream>

using namespace std;

class Properties : public Carta{

protected:
    string owner, type;
    int price, rent, quantity;

public:
    Properties(string);
    string getNombre();
    string getOwner();
    void setOwner(string);
    string getType();
    int getPrice();
    void setPrice(int p);
    int getRent();
    void setRent(int r);
    int getQuantity();
    void setQuantity(int c);
};

#endif // PROPERTIES_H
