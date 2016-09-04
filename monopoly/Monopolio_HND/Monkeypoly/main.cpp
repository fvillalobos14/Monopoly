#include "mainwindow.h"
#include <QApplication>
#include "carta.h"
#include "properties.h"
#include "utilities.h"
#include "stations.h"
#include "player.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Properties *prop = new Properties("Arzu Avenue");
    Utilities *ut = new Utilities("Water Works");
    Carta *ct = new Carta();
    Stations *stns = new Stations("Loser Station");
    Player *pl = new Player("Derick");

    pl->getName();
    prop->getNombre();

    return a.exec();

}
