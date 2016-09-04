#ifndef PLAYER_H
#define PLAYER_H
#include "properties.h"
#include "QLabel"
#include <iostream>

using namespace std;

class Player : public QLabel{
private:
    string name;
    int saldo;
    int posicion;
    bool inJail = false;

public:
    Player(string);
    ~Player();
    string getName();
    int getSaldo();
    int getPosicion();
    void setPosicion(int);
    bool getInJail();
    void setInJail();
};

#endif // PLAYER_H
