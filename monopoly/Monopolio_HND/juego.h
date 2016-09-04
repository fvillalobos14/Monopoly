#ifndef JUEGO_H
#define JUEGO_H

#include <QDialog>
#include <iostream>
#include <QHBoxLayout>
#include <QMessageBox>
#include "game.h"
#include "player.h"
#include "qstring.h"
#include "bank.h"


using namespace std;
namespace Ui {
class Juego;
}

class Juego : public QDialog
{
    Q_OBJECT

public:
    explicit Juego(QWidget *parent = 0);
    QPixmap *dice1= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/1.png");
    QPixmap *dice2= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/2.png");
    QPixmap *dice3= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/3.png");
    QPixmap *dice4= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/4.png");
    QPixmap *dice5= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/5.png");
    QPixmap *dice6= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/setDados/6.png");
    QPixmap *tablero = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/tablerofinal.png");
    //QPixmap *hat= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/hat.png");
    QPixmap *iconFirst = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/hat.png");
    QPixmap *iconSecond= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/car.png");
    QPixmap *iconThird= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/barrow.png");
    QPixmap *iconFourth= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/boot.png");
    QPixmap *iconOnBoard= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/hat1.png");
    QPixmap *iconOnBoard2= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/car1.png");
    QPixmap *iconOnBoard3= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/barrow1.png");
    QPixmap *iconOnBoard4= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/boot1.png");
    QPixmap *iconOnBoard5= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/icons/dog1.png");
    QPixmap *empty= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/empty.png");
    QPixmap *jaildeco= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/jaildeco.png");
    QPixmap *monodolar= new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/MonoDolar.png");
    QPixmap *monodolarjugadores = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/MonoDolarNoir.png");
    QPixmap *copyrights = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/copyrights.png");

    Game *diceC1;
    Game *diceC2;
    Bank *elBanco = new Bank();
    Player *p1 = new Player();
    Player *p2 = new Player();
    Player *p3 = new Player();
    Player *p4 = new Player();

    int d1;
    int d2;
    int turno = 1;
    int turnoCarcel =1;
    int resultadoDado;
    void buy(Player *p);
    void rent(Player *p);
    ~Juego();

private slots:
    void on_pushButton_clicked();
    void on_buyProperty_clicked();
    void on_payJail_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Juego *ui;
};

#endif // JUEGO_H
