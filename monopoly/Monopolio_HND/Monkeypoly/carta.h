#ifndef CARTA_H
#define CARTA_H

#include <iostream>

using namespace std;

class Carta{
protected:
    string nombre, color;
    int posicion, altura, ancho;
    bool buyable;

public:
    Carta();
    string getNombre();
    void setNombre(string);
    string getColor();
    void setColor(string);
    int getPos();
    int getHeight();
    void setHeight(int);
    int getWidth();
    void setWidth(int);

};

#endif // CARTA_H
