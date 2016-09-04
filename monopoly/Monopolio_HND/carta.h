#ifndef CARTA_H
#define CARTA_H

#include <iostream>
#include "QPixmap"

using namespace std;

class Carta{
public:
    string nombre, color;
    string owner =" ";
    int posicion, posicionXMenor, posicionXMayor, posicionYMenor, posicionYMayor;
    int price =0;
    bool buyable = false;
    QPixmap *imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/empty.png");
    Carta();
    string getNombre();
    string getOwner();
    void setOwner(string);
    void setNombre(string);
    string getColor();
    void setColor(string);
    int getPos();
    void setPrice(int p);
    //bool owned = false;

};

#endif // CARTA_H
