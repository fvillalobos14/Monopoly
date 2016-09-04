#include "properties.h"

Properties::Properties(string n){
    nombre = n;
}

string Properties::getNombre(){
    cout<<nombre<<endl;
    return nombre;
}

string Properties::getOwner() {
    cout<<owner<<endl;
    return owner;
}

void Properties::setOwner(string o) {
    owner = o;
}

string Properties::getType() {
    cout<<type<<endl;
    return type;
}

int Properties::getPrice() {
    cout<<price<<endl;
    return price;
}

void Properties::setPrice(int p) {
    price = p;
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
