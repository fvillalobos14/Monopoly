#include "properties.h"

Properties::Properties(string n){
    nombre = n;
    buyable = true;
}

string Properties::getType() {
    //cout<<type<<endl;
    return type;
}

void Properties::setRent(int r) {
    rent = r;
}

int Properties::getRent() {
    cout<<rent<<endl;
    return rent;
}

int Properties::getQuantity() {
    cout<<quantity<<endl;
    return quantity;
}

void Properties::setQuantity(int c) {
    quantity = c;
}

