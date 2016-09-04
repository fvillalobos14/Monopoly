#include "juego.h"
#include "ui_juego.h"
#include <iostream>
using namespace std;

Juego::Juego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Juego){
    ui->setupUi(this);
    ui->icontopplayer->setPixmap(*iconFirst);
    ui->iconleftplayer->setPixmap(*iconSecond);
    ui->iconrightplayer->setPixmap(*iconThird);
    ui->iconbottomplayer->setPixmap(*iconFourth);
    p1->setLabel(ui->topplayerboard);
    p1->setIcon(*iconOnBoard);
    p1->setCoordinates(532,532);
    p2->setLabel(ui->p2onboard);
    p2->setIcon(*iconOnBoard2);
    p2->setCoordinates(532,532);
    p3->setLabel(ui->p3onboard);
    p3->setIcon(*iconOnBoard3);
    p3->setCoordinates(532,532);
    p4->setLabel(ui->p4onboard);
    p4->setIcon(*iconOnBoard4);
    p4->setCoordinates(532,532);
    ui->tablero->setPixmap(*tablero);
    ui->dado1->setPixmap(*dice6);
    ui->dado2->setPixmap(*dice6);
    ui->iconodeturno->setPixmap(*iconFirst);
    ui->turntoPay->setPixmap(*jaildeco);
    ui->monodolar->setPixmap(*monodolar);
    ui->monollarbank->setPixmap(*monodolar);
    ui->monollarsign->setPixmap(*monodolarjugadores);
    ui->monollarsign2->setPixmap(*monodolarjugadores);
    ui->monollarsign3->setPixmap(*monodolarjugadores);
    ui->monollarsign4->setPixmap(*monodolarjugadores);
    ui->copyrights->setPixmap(*copyrights);
    ui->amountp1->setText("1500");
    ui->amountp2->setText("1500");
    ui->amountp3->setText("1500");
    ui->amountp4->setText("1500");
    //properties player 1
    ui->p1p1->setPixmap(*empty);
    ui->p1p2->setPixmap(*empty);
    ui->p1p3->setPixmap(*empty);
    ui->p1p4->setPixmap(*empty);
    ui->p1p5->setPixmap(*empty);
    ui->p1p6->setPixmap(*empty);
    ui->p1p7->setPixmap(*empty);
    ui->p1p8->setPixmap(*empty);
    ui->p1p9->setPixmap(*empty);
    ui->p1p10->setPixmap(*empty);
    ui->p1p11->setPixmap(*empty);
    ui->p1p12->setPixmap(*empty);
    //properties player 2
    ui->p2p1->setPixmap(*empty);
    ui->p2p2->setPixmap(*empty);
    ui->p2p3->setPixmap(*empty);
    ui->p2p4->setPixmap(*empty);
    ui->p2p5->setPixmap(*empty);
    ui->p2p6->setPixmap(*empty);
    ui->p2p7->setPixmap(*empty);
    ui->p2p8->setPixmap(*empty);
    ui->p2p9->setPixmap(*empty);
    ui->p2p10->setPixmap(*empty);
    ui->p2p11->setPixmap(*empty);
    ui->p2p12->setPixmap(*empty);
    //properties player 3
    ui->p3p1->setPixmap(*empty);
    ui->p3p2->setPixmap(*empty);
    ui->p3p3->setPixmap(*empty);
    ui->p3p4->setPixmap(*empty);
    ui->p3p5->setPixmap(*empty);
    ui->p3p6->setPixmap(*empty);
    ui->p3p7->setPixmap(*empty);
    ui->p3p8->setPixmap(*empty);
    ui->p3p9->setPixmap(*empty);
    ui->p3p10->setPixmap(*empty);
    ui->p3p11->setPixmap(*empty);
    ui->p3p12->setPixmap(*empty);
    //properties player 4
    ui->p4p1->setPixmap(*empty);
    ui->p4p2->setPixmap(*empty);
    ui->p4p3->setPixmap(*empty);
    ui->p4p4->setPixmap(*empty);
    ui->p4p5->setPixmap(*empty);
    ui->p4p6->setPixmap(*empty);
    ui->p4p7->setPixmap(*empty);
    ui->p4p8->setPixmap(*empty);
    ui->p4p9->setPixmap(*empty);
    ui->p4p10->setPixmap(*empty);
    ui->p4p11->setPixmap(*empty);
    ui->p4p12->setPixmap(*empty);
    p1->setName("Player 1");
    p2->setName("Player 2");
    p3->setName("Player 3");
    p4->setName("Player 4");
}


void Juego::on_pushButton_clicked()
{
    Game *diceC1 = new Game();
    Game *diceC2 = new Game();

    int d1 = diceC1->dice();
    int d2 = diceC2->dice();
    resultadoDado = d1+d2;
    switch(d1){
        case 1: ui->dado1->setPixmap(*dice1);
        break;
        case 2: ui->dado1->setPixmap(*dice2);
        break;
        case 3: ui->dado1->setPixmap(*dice3);
        break;
        case 4: ui->dado1->setPixmap(*dice4);
        break;
        case 5: ui->dado1->setPixmap(*dice5);
        break;
        case 6: ui->dado1->setPixmap(*dice6);
    }

    switch(d2){
        case 1: ui->dado2->setPixmap(*dice1);
        break;
        case 2: ui->dado2->setPixmap(*dice2);
        break;
        case 3: ui->dado2->setPixmap(*dice3);
        break;
        case 4: ui->dado2->setPixmap(*dice4);
        break;
        case 5: ui->dado2->setPixmap(*dice5);
        break;
        case 6: ui->dado2->setPixmap(*dice6);
    }
    if(turno ==1){
        //ui->iconodeturno->setPixmap(*iconSecond);
        if(p1->getXCoordinate() >= 403 && p1->getXCoordinate() <= 448){ //WATER WORKS
            if(p1->getYCoordinate() >= 0 && p1->getYCoordinate() <= 80){
                switch(d1+d2){
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p1->getXCoordinate() >= 448 && p1->getXCoordinate() <= 492){ //PICO BONITO
            if(p1->getYCoordinate() >= 0 && p1->getYCoordinate() <= 80){
                switch(d1+d1){
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p1->getXCoordinate() >= 492 && p1->getXCoordinate() <= 572){
            if(p1->getYCoordinate() >=80 && p1->getYCoordinate() <= 125 ){ //UTILA
                switch(d1+d2){
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >=125 && p1->getYCoordinate() <= 171){ //GUANAJA
                switch(d1+d2){
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 171 &&  p1->getYCoordinate() <= 217){ //COMMUNITY CHEST
                switch(d1+d2){
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 217  &&  p1->getYCoordinate() <= 263){ //ROATAN AVENUE
                switch(d1+d2){
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 263  &&  p1->getYCoordinate() <= 310){ //BANANA RAILROAD
                switch(d1+d2){
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 310  &&  p1->getYCoordinate() <= 356){ //CHANCE DERECHO
                switch(d1+d2){
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 356  &&  p1->getYCoordinate() <= 402){ //CORTES AVENUE
                switch(d1+d2){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 402  &&  p1->getYCoordinate() <= 448){ //WAR TAX
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p1->getYCoordinate() >= 448  &&  p1->getYCoordinate() <= 492){ //LA CEIBA AVENUE
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        p1->mover(d1 + d2);
        p1->turnCounter++;
        rent(p1);
        if(p2->inJail==true){ //JAIL VALIDATION
                turno = 3;
                ui->iconodeturno->setPixmap(*iconThird);
                turnoCarcel = 2;
                ui->turntoPay->setPixmap(*iconSecond);
                ui->payJail->setEnabled(true);
                ui->pushButton_2->setEnabled(true);
        }
        else{
            turno =2;
            turnoCarcel =2;
            ui->iconodeturno->setPixmap(*iconSecond);
        }

        //turno =2;
        QString saldo = QString::number(p1->saldo);
        ui->amountp1->setText(saldo);

        if(p1->getXCoordinate() >= 311 && p1->getXCoordinate() <= 357){
            if(p1->getYCoordinate() >= 492 && p1->getYCoordinate() <= 572){
                elBanco->addIncomeTaxes();
            }
        }
        else if(p1->getXCoordinate() >= 492 && p1->getXCoordinate() <= 572){
            if(p1->getYCoordinate() >= 402  &&  p1->getYCoordinate() <= 448){
                elBanco->addWarTaxes();
            }
        }
        QString saldoBancario = QString::number(elBanco->money);
        ui->bankbalance->setText(saldoBancario);
    }
    else if(turno ==2){
        //ui->iconodeturno->setPixmap(*iconThird);
        if(p2->getXCoordinate() >= 403 && p2->getXCoordinate() <= 448){ //WATER WORKS
            if(p2->getYCoordinate() >= 0 && p2->getYCoordinate() <= 80){
                switch(d1+d2){
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p2->getXCoordinate() >= 448 && p2->getXCoordinate() <= 492){ //PICO BONITO
            if(p2->getYCoordinate() >= 0 && p2->getYCoordinate() <= 80){
                switch(d1+d1){
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p2->getXCoordinate() >= 492 && p2->getXCoordinate() <= 572){
            if(p2->getYCoordinate() >=80 && p2->getYCoordinate() <= 125 ){ //UTILA
                switch(d1+d2){
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >=125 && p2->getYCoordinate() <= 171){ //GUANAJA
                switch(d1+d2){
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 171 &&  p2->getYCoordinate() <= 217){ //COMMUNITY CHEST
                switch(d1+d2){
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 217  &&  p2->getYCoordinate() <= 263){ //ROATAN AVENUE
                switch(d1+d2){
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 263  &&  p2->getYCoordinate() <= 310){ //BANANA RAILROAD
                switch(d1+d2){
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 310  &&  p2->getYCoordinate() <= 356){ //CHANCE DERECHO
                switch(d1+d2){
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 356  &&  p2->getYCoordinate() <= 402){ //CORTES AVENUE
                switch(d1+d2){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 402  &&  p2->getYCoordinate() <= 448){ //WAR TAX
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p2->getYCoordinate() >= 448  &&  p2->getYCoordinate() <= 492){ //LA CEIBA AVENUE
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        p2->mover(d1 + d2);
        p2->turnCounter++;
        rent(p2);
        if(p3->inJail==true){ //JAIL VALIDATION
                turno = 4;
                ui->iconodeturno->setPixmap(*iconFourth);
                turnoCarcel=3;
                ui->turntoPay->setPixmap(*iconThird);
                ui->payJail->setEnabled(true);
                ui->pushButton_2->setEnabled(true);
        }
        else{
            turno =3;
            turnoCarcel = 3;
            ui->iconodeturno->setPixmap(*iconThird);
        }
        //turno =3;
        QString saldo = QString::number(p2->saldo);
        ui->amountp2->setText(saldo);

        if(p2->getXCoordinate() >= 311 && p2->getXCoordinate() <= 357){
            if(p2->getYCoordinate() >= 492 && p2->getYCoordinate() <= 572){
                elBanco->addIncomeTaxes();
            }
        }
        else if(p2->getXCoordinate() >= 492 && p2->getXCoordinate() <= 572){
            if(p2->getYCoordinate() >= 402  &&  p2->getYCoordinate() <= 448){
                elBanco->addWarTaxes();
            }
        }
        QString saldoBancario = QString::number(elBanco->money);
        ui->bankbalance->setText(saldoBancario);
    }
    else if(turno ==3){
        //ui->iconodeturno->setPixmap(*iconFourth);
        if(p3->getXCoordinate() >= 403 && p3->getXCoordinate() <= 448){ //WATER WORKS
            if(p3->getYCoordinate() >= 0 && p3->getYCoordinate() <= 80){
                switch(d1+d2){
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p3->getXCoordinate() >= 448 && p3->getXCoordinate() <= 492){ //PICO BONITO
            if(p3->getYCoordinate() >= 0 && p3->getYCoordinate() <= 80){
                switch(d1+d1){
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p3->getXCoordinate() >= 492 && p3->getXCoordinate() <= 572){
            if(p3->getYCoordinate() >=80 && p3->getYCoordinate() <= 125 ){ //UTILA
                switch(d1+d2){
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >=125 && p3->getYCoordinate() <= 171){ //GUANAJA
                switch(d1+d2){
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 171 &&  p3->getYCoordinate() <= 217){ //COMMUNITY CHEST
                switch(d1+d2){
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 217  &&  p3->getYCoordinate() <= 263){ //ROATAN AVENUE
                switch(d1+d2){
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 263  &&  p3->getYCoordinate() <= 310){ //BANANA RAILROAD
                switch(d1+d2){
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 310  &&  p3->getYCoordinate() <= 356){ //CHANCE DERECHO
                switch(d1+d2){
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 356  &&  p3->getYCoordinate() <= 402){ //CORTES AVENUE
                switch(d1+d2){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 402  &&  p3->getYCoordinate() <= 448){ //WAR TAX
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p3->getYCoordinate() >= 448  &&  p3->getYCoordinate() <= 492){ //LA CEIBA AVENUE
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        p3->mover(d1 + d2);
        p3->turnCounter++;
        rent(p3);
        if(p4->inJail==true){ //JAIL VALIDATION
                turno = 1;
                ui->iconodeturno->setPixmap(*iconFirst);
                turnoCarcel=4;
                ui->turntoPay->setPixmap(*iconFourth);
                ui->payJail->setEnabled(true);
                ui->pushButton_2->setEnabled(true);
        }
        else{
            turno =4;
            turnoCarcel=4;
            ui->iconodeturno->setPixmap(*iconFourth);
        }
        //turno =4;
        QString saldo = QString::number(p3->saldo);
        ui->amountp3->setText(saldo);

        if(p3->getXCoordinate() >= 311 && p3->getXCoordinate() <= 357){
            if(p3->getYCoordinate() >= 492 && p3->getYCoordinate() <= 572){
                elBanco->addIncomeTaxes();
            }
        }
        else if(p3->getXCoordinate() >= 492 && p3->getXCoordinate() <= 572){
            if(p3->getYCoordinate() >= 402  &&  p3->getYCoordinate() <= 448){
                elBanco->addWarTaxes();
            }
        }
        QString saldoBancario = QString::number(elBanco->money);
        ui->bankbalance->setText(saldoBancario);
    }
    else if(turno ==4){
        //ui->iconodeturno->setPixmap(*iconFirst);
        if(p4->getXCoordinate() >= 403 && p4->getXCoordinate() <= 448){ //WATER WORKS
            if(p4->getYCoordinate() >= 0 && p4->getYCoordinate() <= 80){
                switch(d1+d2){
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p4->getXCoordinate() >= 448 && p4->getXCoordinate() <= 492){ //PICO BONITO
            if(p4->getYCoordinate() >= 0 && p4->getYCoordinate() <= 80){
                switch(d1+d1){
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        else if(p4->getXCoordinate() >= 492 && p4->getXCoordinate() <= 572){
            if(p4->getYCoordinate() >=80 && p4->getYCoordinate() <= 125 ){ //UTILA
                switch(d1+d2){
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >=125 && p4->getYCoordinate() <= 171){ //GUANAJA
                switch(d1+d2){
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 171 &&  p4->getYCoordinate() <= 217){ //COMMUNITY CHEST
                switch(d1+d2){
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 217  &&  p4->getYCoordinate() <= 263){ //ROATAN AVENUE
                switch(d1+d2){
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 263  &&  p4->getYCoordinate() <= 310){ //BANANA RAILROAD
                switch(d1+d2){
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 310  &&  p4->getYCoordinate() <= 356){ //CHANCE DERECHO
                switch(d1+d2){
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 356  &&  p4->getYCoordinate() <= 402){ //CORTES AVENUE
                switch(d1+d2){
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 402  &&  p4->getYCoordinate() <= 448){ //WAR TAX
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
            else if(p4->getYCoordinate() >= 448  &&  p4->getYCoordinate() <= 492){ //LA CEIBA AVENUE
                switch(d1+d2){
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                        elBanco->substractMoney();
                    break;
                }
            }
        }

        p4->mover(d1 + d2);
        p4->turnCounter++;
        rent(p4);
        if(p1->inJail==true){ //JAIL VALIDATION
                turno = 2;
                ui->iconodeturno->setPixmap(*iconSecond);
                turnoCarcel=1;
                ui->turntoPay->setPixmap(*iconFirst);
                ui->payJail->setEnabled(true);
                ui->pushButton_2->setEnabled(true);
        }
        else{
            turno =1;
            turnoCarcel=1;
            ui->iconodeturno->setPixmap(*iconFirst);
        }
        //turno =1;
        QString saldo = QString::number(p4->saldo);
        ui->amountp4->setText(saldo);

        if(p4->getXCoordinate() >= 311 && p4->getXCoordinate() <= 357){
            if(p4->getYCoordinate() >= 492 && p4->getYCoordinate() <= 572){
                elBanco->addIncomeTaxes();
            }
        }
        else if(p4->getXCoordinate() >= 492 && p4->getXCoordinate() <= 572){
            if(p4->getYCoordinate() >= 402  &&  p4->getYCoordinate() <= 448){
                elBanco->addWarTaxes();
            }
        }

        QString saldoBancario = QString::number(elBanco->money);
        ui->bankbalance->setText(saldoBancario);

    }

}

void Juego:: buy(Player *p){
    cout<<(elBanco->cartas[elBanco->searchForProp(p)]).getOwner()<<endl;
    if((elBanco->cartas[elBanco->searchForProp(p)]).buyable == true){
        if((elBanco->cartas[elBanco->searchForProp(p)]).getOwner() == " "){
            if(p->getName() == p1->getName()){
                if(p1->saldo >= (elBanco->cartas[elBanco->searchForProp(p)]).price ){
                    cout<<elBanco->searchForProp(p)<<endl;
                    if(elBanco->searchForProp(p) == 12 || elBanco->searchForProp(p) ==28){
                        p1->utilityCounter++;
                        cout<<p1->utilityCounter<<endl;
                    }
                    if(elBanco->searchForProp(p) == 5 || elBanco->searchForProp(p) == 15 || elBanco->searchForProp(p) == 25 || elBanco->searchForProp(p) == 35){
                        p1->stationCounter++;
                        cout<<p1->stationCounter<<endl;
                    }

                    if(p1->propCounter ==0){
                        ui->p1p1->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==1){
                        ui->p1p2->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==2){
                        ui->p1p3->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==3){
                        ui->p1p4->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==4){
                        ui->p1p5->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==5){
                        ui->p1p6->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==6){
                        ui->p1p7->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==7){
                        ui->p1p8->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==8){
                        ui->p1p9->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==9){
                        ui->p1p10->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==10){
                        ui->p1p11->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                    else if(p1->propCounter ==11){
                        ui->p1p12->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 1");
                        p1->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p1->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p1->propCounter++;
                    }
                }
                else
                    QMessageBox::information(this,"Economic Issues","Your balance is insufficient to buy this property");
            }
            else if(p->getName() == p2->getName()){
                if(p2->saldo >= (elBanco->cartas[elBanco->searchForProp(p)]).price ){
                    cout<<elBanco->searchForProp(p)<<endl;
                    if(elBanco->searchForProp(p) == 12 || elBanco->searchForProp(p) ==28){
                        p2->utilityCounter++;
                        cout<<p2->utilityCounter<<endl;
                    }
                    if(elBanco->searchForProp(p) == 5 || elBanco->searchForProp(p) == 15 || elBanco->searchForProp(p) == 25 || elBanco->searchForProp(p) == 35){
                        p2->stationCounter++;
                        cout<<p2->stationCounter<<endl;
                    }
                    if(p2->propCounter ==0){
                        ui->p2p1->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==1){
                        ui->p2p2->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==2){
                        ui->p2p3->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==3){
                        ui->p2p4->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==4){
                        ui->p2p5->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==5){
                        ui->p2p6->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==6){
                        ui->p2p7->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==7){
                        ui->p2p8->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==8){
                        ui->p2p9->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==9){
                        ui->p2p10->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==10){
                        ui->p2p11->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                    else if(p2->propCounter ==11){
                        ui->p2p12->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 2");
                        p2->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p2->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p2->propCounter++;
                    }
                }
                else
                    QMessageBox::information(this,"Economic Issues","Your balance is insufficient to buy this property");
            }
            else if(p->getName() == p3->getName()){
                if(p3->saldo >= (elBanco->cartas[elBanco->searchForProp(p)]).price ){
                    cout<<elBanco->searchForProp(p)<<endl;
                    if(elBanco->searchForProp(p) == 12 || elBanco->searchForProp(p) ==28){
                        p3->utilityCounter++;
                        cout<<p3->utilityCounter<<endl;
                    }
                    if(elBanco->searchForProp(p) == 5 || elBanco->searchForProp(p) == 15 || elBanco->searchForProp(p) == 25 || elBanco->searchForProp(p) == 35){
                        p3->stationCounter++;
                        cout<<p3->stationCounter<<endl;
                    }
                    if(p3->propCounter ==0){
                        ui->p3p1->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==1){
                        ui->p3p2->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==2){
                        ui->p3p3->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==3){
                        ui->p3p4->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==4){
                        ui->p3p5->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==5){
                        ui->p3p6->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==6){
                        ui->p3p7->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==7){
                        ui->p3p8->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==8){
                        ui->p3p9->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==9){
                        ui->p3p10->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==10){
                        ui->p3p11->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                    else if(p3->propCounter ==11){
                        ui->p3p12->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 3");
                        p3->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p3->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p3->propCounter++;
                    }
                }
                else
                    QMessageBox::information(this,"Economic Issues","Your balance is insufficient to buy this property");
            }
            else if(p->getName() == p4->getName()){
                if(p4->saldo >= (elBanco->cartas[elBanco->searchForProp(p)]).price ){
                    cout<<elBanco->searchForProp(p)<<endl;
                    if(elBanco->searchForProp(p) == 12 || elBanco->searchForProp(p) ==28){
                        p4->utilityCounter++;
                        cout<<p4->utilityCounter<<endl;
                    }
                    if(elBanco->searchForProp(p) == 5 || elBanco->searchForProp(p) == 15 || elBanco->searchForProp(p) == 25 || elBanco->searchForProp(p) == 35){
                        p4->stationCounter++;
                        cout<<p4->stationCounter<<endl;
                    }
                    if(p4->propCounter ==0){
                        ui->p4p1->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==1){
                        ui->p4p2->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==2){
                        ui->p4p3->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==3){
                        ui->p4p4->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==4){
                        ui->p4p5->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==5){
                        ui->p4p6->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==6){
                        ui->p4p7->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==7){
                        ui->p4p8->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==8){
                        ui->p4p9->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==9){
                        ui->p4p10->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==10){
                        ui->p4p11->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                    else if(p4->propCounter ==11){
                        ui->p4p12->setPixmap(*((elBanco->cartas[elBanco->searchForProp(p)]).imagen));
                        (elBanco->cartas[elBanco->searchForProp(p)]).setOwner("Player 4");
                        p4->saldo-=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        elBanco->money+=(elBanco->cartas[elBanco->searchForProp(p)]).price;
                        string message = "" + p4->getName() + " just bought " + (elBanco->cartas[elBanco->searchForProp(p)]).getNombre();
                        QString shownMsg = QString::fromStdString(message);
                        QMessageBox::information(this,"Property Notice", shownMsg);
                        p4->propCounter++;
                    }
                }
                else
                    QMessageBox::information(this,"Economic Issues","Your balance is insufficient to buy this property");
            }

        }
        else
            QMessageBox::information(this, "Property Information", "The property is owned already");
    }
}

void Juego::on_buyProperty_clicked(){
   if(turno ==2 || (turno ==3 && p2->inJail==true)){
       buy(p1);
       QString saldo = QString::number(p1->saldo);
       ui->amountp1->setText(saldo);
       QString saldoBanco = QString::number(elBanco->money);
       ui->bankbalance->setText(saldoBanco);
       cout<<"El sombrero puede comprar"<<endl;
       //turno =2;
   }
   else if(turno ==3 || (turno ==4 && p3->inJail==true)){
       buy(p2);
       QString saldo = QString::number(p2->saldo);
       ui->amountp2->setText(saldo);
       QString saldoBanco = QString::number(elBanco->money);
       ui->bankbalance->setText(saldoBanco);
       cout<<"El automovil puede comprar"<<endl;
       //turno = 3;
   }
   else if(turno ==4 || (turno ==1 && p4->inJail==true)){
       buy(p3);
       QString saldo = QString::number(p3->saldo);
       ui->amountp3->setText(saldo);
       QString saldoBanco = QString::number(elBanco->money);
       ui->bankbalance->setText(saldoBanco);
       cout<<"La carreta puede comprar"<<endl;
       //turno =4;
   }
   else if(turno ==1 || (turno ==2 && p1->inJail==true)){
       buy(p4);
       QString saldo = QString::number(p4->saldo);
       ui->amountp4->setText(saldo);
       QString saldoBanco = QString::number(elBanco->money);
       ui->bankbalance->setText(saldoBanco);
       cout<<"El zapato puede comprar"<<endl;
       //turno =1;
   }
}

Juego::~Juego()
{
    delete ui;
}

void Juego::on_payJail_clicked()
{
    if(turnoCarcel==1 && p1->inJail==true){
        p1->inJail=false;
        p1->payJail();
        elBanco->liberarPreso();
        ui->turntoPay->setPixmap(*jaildeco);
        turnoCarcel=2;
        string message = "" + p1->getName() + " just paid to get out of jail";
        QString shownMsg = QString::fromStdString(message);
        QMessageBox::information(this, "Jail Activity", shownMsg);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==2 && p2->inJail==true){
        p2->inJail=false;
        p2->payJail();
        elBanco->liberarPreso();
        ui->turntoPay->setPixmap(*jaildeco);
        turnoCarcel=3;
        string message = "" + p2->getName() + " just paid to get out of jail";
        QString shownMsg = QString::fromStdString(message);
        QMessageBox::information(this, "Jail Activity", shownMsg);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==3 && p3->inJail==true){
        p3->inJail=false;
        p3->payJail();
        elBanco->liberarPreso();
        ui->turntoPay->setPixmap(*jaildeco);
        turnoCarcel=4;
        string message = "" + p3->getName() + " just paid to get out of jail";
        QString shownMsg = QString::fromStdString(message);
        QMessageBox::information(this, "Jail Activity", shownMsg);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==4 && p4->inJail==true){
        p4->inJail=false;
        p4->payJail();
        elBanco->liberarPreso();
        ui->turntoPay->setPixmap(*jaildeco);
        turnoCarcel=1;
        string message = "" + p4->getName() + " just paid to get out of jail";
        QString shownMsg = QString::fromStdString(message);
        QMessageBox::information(this, "Jail Activity", shownMsg);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
}

void Juego::on_pushButton_2_clicked()
{
    if(turnoCarcel==1){
        turnoCarcel=2;
        ui->turntoPay->setPixmap(*jaildeco);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==2){
        turnoCarcel=3;
        ui->turntoPay->setPixmap(*jaildeco);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==3){
        turnoCarcel=4;
        ui->turntoPay->setPixmap(*jaildeco);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
    else if(turnoCarcel==4){
        turnoCarcel=1;
        ui->turntoPay->setPixmap(*jaildeco);
        ui->payJail->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
    }
}

void Juego::rent(Player *p){ // este es la funcion de renta
    int renta = 0; //esta variable cambia dependiendo de donde cae
    string benefactor = elBanco->cartas[elBanco->searchForProp(p)].getOwner(); //el player que recibe la renta

    if(benefactor != " "){
        if(benefactor != p->getName()){

            if(p->getYCoordinate() >= 492 && p->getYCoordinate()<= 572){ //linea inferior

                if(p->getXCoordinate() >= 448 && p->getXCoordinate()<= 492){ //olanchito
                    renta = 2;

                }else if(p->getXCoordinate() >= 357 && p->getXCoordinate()<= 403){ //trujillo
                    renta = 4;

                }else if(p->getXCoordinate() >= 263 && p->getXCoordinate()<= 311){ //swinford

                    if(benefactor == p1->getName()){
                        if(p1->stationCounter==1){
                            renta = 25;
                        }else if(p1->stationCounter == 2){
                            renta = 50;
                        }else if(p1->stationCounter == 3){
                            renta = 100;
                        }else if(p1->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p2->getName()){
                        if(p2->stationCounter==1){
                            renta = 25;
                        }else if(p2->stationCounter == 2){
                            renta = 50;
                        }else if(p2->stationCounter == 3){
                            renta = 100;
                        }else if(p2->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p3->getName()){
                        if(p3->stationCounter==1){
                            renta = 25;
                        }else if(p3->stationCounter == 2){
                            renta = 50;
                        }else if(p3->stationCounter == 3){
                            renta = 100;
                        }else if(p3->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p4->getName()){
                        if(p4->stationCounter==1){
                            renta = 25;
                        }else if(p4->stationCounter == 2){
                            renta = 50;
                        }else if(p4->stationCounter == 3){
                            renta = 100;
                        }else if(p4->stationCounter == 4){
                            renta = 200;
                        }
                    }

                }else if(p->getXCoordinate() >= 217 && p->getXCoordinate()<= 263){//la quinta
                    renta = 6;

                }else if(p->getXCoordinate() >= 125 && p->getXCoordinate()<= 171){//lancetilla
                    renta = 6;

                }else if(p->getXCoordinate() >= 80 && p->getXCoordinate()<= 125){//panacam
                    renta = 8;
                }


            }else if(p->getYCoordinate() >= 448 && p->getYCoordinate()<= 492){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate()<= 80){ //clarion
                    renta = 10;
                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate()<= 572){ //la ceiba
                    renta = 50;
                }


            }else if(p->getYCoordinate() >= 402 && p->getYCoordinate()<= 448){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate()<= 80){ //electric
                    if(benefactor == p1->getName()){
                        if(p1->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p1->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p2->getName()){
                        if(p2->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p2->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p3->getName()){
                        if(p3->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p3->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p4->getName()){
                        if(p4->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p4->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }
                    }

                }


            }else if(p->getYCoordinate() >= 356 && p->getYCoordinate()<= 402){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate()<= 80){ //merendon
                    renta = 10;

                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate()<= 572){ //cortes
                    renta = 35;
                }


            }else if(p->getYCoordinate() >= 310 && p->getYCoordinate() <= 356){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate() <= 80){ //jardines
                    renta = 12;
                }


            }else if(p->getYCoordinate() >= 263 && p->getYCoordinate()<= 310){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate() <= 80){ //mining
                    if(benefactor == p1->getName()){
                        if(p1->stationCounter==1){
                            renta = 25;
                        }else if(p1->stationCounter == 2){
                            renta = 50;
                        }else if(p1->stationCounter == 3){
                            renta = 100;
                        }else if(p1->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p2->getName()){
                        if(p2->stationCounter==1){
                            renta = 25;
                        }else if(p2->stationCounter == 2){
                            renta = 50;
                        }else if(p2->stationCounter == 3){
                            renta = 100;
                        }else if(p2->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p3->getName()){
                        if(p3->stationCounter==1){
                            renta = 25;
                        }else if(p3->stationCounter == 2){
                            renta = 50;
                        }else if(p3->stationCounter == 3){
                            renta = 100;
                        }else if(p3->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p4->getName()){
                        if(p4->stationCounter==1){
                            renta = 25;
                        }else if(p4->stationCounter == 2){
                            renta = 50;
                        }else if(p4->stationCounter == 3){
                            renta = 100;
                        }else if(p4->stationCounter == 4){
                            renta = 200;
                        }
                    }
                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate() <= 572){ //banana
                    if(benefactor == p1->getName()){
                        if(p1->stationCounter==1){
                            renta = 25;
                        }else if(p1->stationCounter == 2){
                            renta = 50;
                        }else if(p1->stationCounter == 3){
                            renta = 100;
                        }else if(p1->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p2->getName()){
                        if(p2->stationCounter==1){
                            renta = 25;
                        }else if(p2->stationCounter == 2){
                            renta = 50;
                        }else if(p2->stationCounter == 3){
                            renta = 100;
                        }else if(p2->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p3->getName()){
                        if(p3->stationCounter==1){
                            renta = 25;
                        }else if(p3->stationCounter == 2){
                            renta = 50;
                        }else if(p3->stationCounter == 3){
                            renta = 100;
                        }else if(p3->stationCounter == 4){
                            renta = 200;
                        }

                    }else if(benefactor == p4->getName()){
                        if(p4->stationCounter==1){
                            renta = 25;
                        }else if(p4->stationCounter == 2){
                            renta = 50;
                        }else if(p4->stationCounter == 3){
                            renta = 100;
                        }else if(p4->stationCounter == 4){
                            renta = 200;
                        }
                    }
                }


            }else if(p->getYCoordinate() >= 217 && p->getYCoordinate() <= 263){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate() <= 80){ //foresta
                    renta = 14;
                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate() <= 572){ //roatan
                    renta = 28;
                }


            }else if(p->getYCoordinate() >= 125 && p->getYCoordinate() <= 171){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate() <= 80){ //picacho
                    renta = 14;
                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate() <= 572){ //guanaja
                    renta = 26;
                }


            }else if(p->getYCoordinate() >= 80 && p->getYCoordinate() <= 171){

                if(p->getXCoordinate() >= 0 && p->getXCoordinate() <= 80){ //atlantida
                    renta = 16;
                }else if(p->getXCoordinate() >= 492 && p->getXCoordinate() <= 572){ //utila
                    renta = 26;
                }


            }else if(p->getYCoordinate() >= 0 && p->getYCoordinate()<= 80){ // linea superior

                if(p->getXCoordinate() >= 448 && p->getXCoordinate()<= 492){ //pico bonito
                    renta = 24;

                }else if(p->getXCoordinate() >= 403 && p->getXCoordinate()<= 448){ //water works

                    if(benefactor == p1->getName()){
                        if(p1->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p1->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p2->getName()){
                        if(p2->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p2->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p3->getName()){
                        if(p3->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p3->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }

                    }else if(benefactor == p4->getName()){
                        if(p4->utilityCounter==1){
                            renta = 4 * resultadoDado;
                        }else if(p4->utilityCounter == 2){
                            renta = 10 * resultadoDado;
                        }
                    }

                }else if(p->getXCoordinate() >= 357 && p->getXCoordinate()<= 403){ //valle de angeles
                    renta = 22;

                }else if(p->getXCoordinate() >= 311 && p->getXCoordinate()<= 357){ //la paz
                    renta = 22;

                }else if(p->getXCoordinate() >= 263 && p->getXCoordinate()<= 311){//trinidad railroad

                }else if(p->getXCoordinate() >= 217 && p->getXCoordinate()<= 263){//salvavida
                    renta = 20;

                }else if(p->getXCoordinate() >= 171 && p->getXCoordinate()<= 217){//sula
                    renta = 18;

                }else if(p->getXCoordinate() >= 80 && p->getXCoordinate()<= 125){//omoa
                    renta = 18;

                }
            }

            //este es de cuando se le da al owner y se le quita al current player

            if(benefactor == p1->getName()){
                p1->saldo = p1->saldo + renta;
                QString actual = QString::number(p1->saldo);
                ui->amountp1->setText(actual);
                p->saldo = p->saldo - renta;
                string message = "" + p->getName() + " just paid rent to " + benefactor;
                QString shownMsg = QString::fromStdString(message);
                QMessageBox::information(this,"Rent Notice",shownMsg);

            }else if(benefactor == p2->getName()){
                p2->saldo = p2->saldo + renta;
                QString actual = QString::number(p2->saldo);
                ui->amountp2->setText(actual);
                p->saldo = p->saldo - renta;
                string message = "" + p->getName() + " just paid rent to " + benefactor;
                QString shownMsg = QString::fromStdString(message);
                QMessageBox::information(this,"Rent Notice",shownMsg);

            }else if(benefactor == p3->getName()){
                p3->saldo = p3->saldo + renta;
                QString actual = QString::number(p3->saldo);
                ui->amountp3->setText(actual);
                p->saldo = p->saldo - renta;
                string message = "" + p->getName() + " just paid rent to " + benefactor;
                QString shownMsg = QString::fromStdString(message);
                QMessageBox::information(this,"Rent Notice",shownMsg);

            }else if(benefactor == p4->getName()){
                p4->saldo = p4->saldo + renta;
                QString actual = QString::number(p4->saldo);
                ui->amountp4->setText(actual);
                p->saldo = p->saldo - renta;
                string message = "" + p->getName() + " just paid rent to " + benefactor;
                QString shownMsg = QString::fromStdString(message);
                QMessageBox::information(this,"Rent Notice",shownMsg);
            }


        }else{
            cout<<"Current Player is the owner of this property."<<endl;
        }

    }else{
        cout<<"This property has no owner."<<endl;
    }



}

