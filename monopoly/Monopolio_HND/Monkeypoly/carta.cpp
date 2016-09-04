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

int Carta::getPos() {
    return posicion;
}

int Carta::getWidth() {
    return ancho;
}

int Carta::getHeight() {
    return altura;
}

void Carta::setHeight(int h) {
    altura = h;
}

void Carta::setWidth(int w) {
    ancho = w;
}

