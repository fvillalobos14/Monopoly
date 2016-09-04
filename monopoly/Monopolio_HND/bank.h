#ifndef BANK_H
#define BANK_H

#include <iostream>
#include "carta.h"
#include "properties.h"
#include "utilities.h"
#include "stations.h"
#include "player.h"

using namespace std;

class Bank
{
public:
    Bank();
    Carta *cartas = new Carta[40];
    int money;
    void substractMoney();
    void addWarTaxes();
    void addIncomeTaxes();
    int searchForProp(Player *p);
    void liberarPreso();
};

#endif // BANK_H
