#include "carta.h"

Carta::Carta() {

}

string Carta::getNombre() {
    return nombre;
}

void Carta::setNombre(string n) {
    nombre = n;
}

string Carta::getColor() {
    return color;
}

void Carta::setColor(string c){
    color  = c;
}

void Carta::setOwner(string patron){
    owner=patron;
}

string Carta::getOwner(){
    return owner;
}

int Carta::getPos() {
    return posicion;
}

void Carta:: setPrice(int p){
    price = p;
}

