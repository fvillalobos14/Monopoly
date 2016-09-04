#ifndef PLAYER_H
#define PLAYER_H
#include "properties.h"
#include "QLabel"
#include <iostream>

using namespace std;

class Player : public QLabel{
public:
    string name;
    int width = 16;
    int height = 11;
    Properties *props;
    int saldo = 1500;
    QLabel *label;
    bool inJail = false;

public:
    int turnCounter = 0, stationCounter = 0, utilityCounter = 0, propCounter = 0;
    Player();
    ~Player();
    string getName();
    int getSaldo();
    void buyProp(Player);
    int addMoney();
    int cobrarTax();
    void setName(string n);
    void setLabel(QLabel *lbl);
    void setIcon(QPixmap icon);
    bool getInJail();
    void setInJail(bool value);
    void mover(int dResult);
    void setCoordinates(int x, int y);
    int getXCoordinate();
    int getYCoordinate();
    void payJail();
    //void payForProp(Carta c);
};

#endif // PLAYER_H
