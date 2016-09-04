#include "player.h"


Player::Player(string n){
    name = n;
    saldo = 1500;
    posicion = 0;
}

Player::~Player()
{
    
}

void Player::setLabel(QLabel *lbl){
    label = lbl;
}

void Player::setIcon(QPixmap icon){
    label->setPixmap(icon);
}

string Player::getName(){
    cout<<name<<endl;
    return name;
}

int Player::getSaldo(){
    cout<<saldo<<endl;
    return saldo;
}

int Player::getPosicion(){
    return posicion;
}

void Player::setPosicion(int p){
    posicion = p;
}

bool Player::getInJail()
{
    return inJail;
}

void Player::setInJail(bool value)
{
    inJail = value;
}

void Player::setCoordinates(int x, int y){
    label->setGeometry(x,y,width,height);
}

int Player::getXCoordinate(){
    return label->x();
}

int Player::getYCoordinate(){
    return label->y();
}

void Player::mover(int rolldice){
    //set initially as x = 532, y = 532

    if( getXCoordinate() >= 492 && getXCoordinate() <= 572 ){ // EL GO
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch(rolldice){
                case 2:
                    setCoordinates(426,532);
                    /*currentPlayer.x = 426; //community
                    currentPlayer.y = 532;*/
                break;
                case 3:
                    setCoordinates(380,532);
                    /*currentPlayer.x = 380; //trujillo
                    currentPlayer.y = 532;*/
                break;
                case 4:
                    setCoordinates(334,532);
                    /*currentPlayer.x = 334; //income
                    currentPlayer.y = 532;*/
                break;
                case 5:
                    setCoordinates(286,532);
                    /*currentPlayer.x = 286; //swinford
                    currentPlayer.y = 532;*/
                break;
                case 6:
                    setCoordinates(240,532);
                    /*currentPlayer.x = 240; //la quinta
                    currentPlayer.y = 532;*/
                break;
                case 7:
                    setCoordinates(194,532);
                    /*currentPlayer.x = 194; //chance inferior
                    currentPlayer.y = 532;*/
                break;
                case 8:
                    setCoordinates(148,532);
                    /*currentPlayer.x = 148; // lancetilla
                    currentPlayer.y = 532;*/
                break;
                case 9:
                    setCoordinates(102,532);
                    /*currentPlayer.x = 102; //panacam
                    currentPlayer.y = 532;*/
                break;
                case 10:
                    setCoordinates(40,532);
                    /*currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                break;
                case 11:
                    setCoordinates(40,471);
                    /*currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                break;
                case 12:
                    setCoordinates(40,425);
                    /*currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
            }
        }
    }
    else if( getXCoordinate() >= 448 && getXCoordinate() <= 492 ){ // OLANCHITO AVENUE
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(380,532);
                    /*currentPlayer.x = 380; //trujillo
                    currentPlayer.y = 532;*/
                break;
                case 3:
                    setCoordinates(334,532);
                /*
                    currentPlayer.x = 334; //income
                    currentPlayer.y = 532;*/
                break;
                case 4:
                    setCoordinates(286,532);
                /*
                    currentPlayer.x = 286; //swinford
                    currentPlayer.y = 532;*/
                break;
                case 5:
                    setCoordinates(240,532);
                /*
                    currentPlayer.x = 240; //la quinta
                    currentPlayer.y = 532;*/
                break;
                case 6:
                    setCoordinates(194,532);
                /*
                    currentPlayer.x = 194; //chance inferior
                    currentPlayer.y = 532;*/
                break;
                case 7:
                    setCoordinates(148,532);
                /*
                    currentPlayer.x = 148; // lancetilla
                    currentPlayer.y = 532;*/
                break;
                case 8:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    currentPlayer.y = 532;*/
                break;
                case 9:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                break;
                case 10:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                break;
                case 11:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                break;
                case 12:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
            }
        }
    }
    else if( getXCoordinate() >= 403 && getXCoordinate() <= 448 ){ //COMMUNITY CHEST INFERIOR
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(334,532);
                /*
                    currentPlayer.x = 334; //income
                    currentPlayer.y = 532;*/
                break;
                case 3:
                    setCoordinates(286,532);
                /*
                    currentPlayer.x = 286; //swinford
                    currentPlayer.y = 532;*/
                break;
                case 4:
                    setCoordinates(240,532);
                /*
                    currentPlayer.x = 240; //la quinta
                    currentPlayer.y = 532;*/
                break;
                case 5:
                    setCoordinates(194,532);
                /*
                    currentPlayer.x = 194; //chance inferior
                    currentPlayer.y = 532;*/
                break;
                case 6:
                    setCoordinates(148,532);
                /*
                    currentPlayer.x = 148; // lancetilla
                    currentPlayer.y = 532;*/
                break;
                case 7:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    currentPlayer.y = 532;*/
                break;
                case 8:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                break;
                case 9:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                break;
                case 10:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                break;
                case 11:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                break;
                case 12:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
            }
        }
    }

    else if(  getXCoordinate() >= 357 && getXCoordinate() <= 403 ){ //TRUJILLO AVENUE
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(286,532);
                /*
                    currentPlayer.x = 286; //swinford
                    current Player.y = 532;*/
                break;
                case 3:
                    setCoordinates(240,532);
                /*
                    currentPlayer.x = 240; //la quinta
                    current Player.y = 532;*/
                break;
                case 4:
                    setCoordinates(194, 532);
                /*
                    currentPlayer.x = 194; //chance inferior
                    current Player.y = 532;*/
                break;
                case 5:
                    setCoordinates(148,532);
                /*
                    currentPlayer.x = 148; // lancetilla
                    c6rrent Player.y = 532;*/
                break;
                case 6:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    current Player.y = 532;*/
                break;
                case 7:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    current Player.y = 532;*/
                break;
                case 8:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    current Player.y = 471;*/
                break;
                case 9:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    current Player.y = 425;*/
                break;
                case 10:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    current Player.y = 379;*/
                break;
                case 11:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    current Player.y = 333;*/
                break;
                case 12:
                    setCoordinates(40,296);
                /*
                    currentPlayer.x = 40; //mining
                    current Player.y = 296;*/
            }
        }
    }

    else if(  getXCoordinate() >= 311 && getXCoordinate() <= 357 ){ //INCOME TAX
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(240,532);
                /*
                    currentPlayer.x = 240; //la quinta
                    current Player.y = 532;*/
                break;
                case 3:
                    setCoordinates(194,532);
                /*
                    currentPlayer.x = 194; //chance inferior
                    current Player.y = 532;*/
                break;
                case 4:
                    setCoordinates(148,532);
                /*
                    currentPlayer.x = 148; // lancetilla
                    current Player.y = 532;*/
                break;
                case 5:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    current Player.y = 532;*/
                break;
                case 6:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    current Player.y = 532;*/
                break;
                case 7:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    current Player.y = 471;*/
                break;
                case 8:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    current Player.y = 425;*/
                break;
                case 9:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    current Player.y = 379;*/
                break;
                case 10:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    current Player.y = 333;*/
                break;
                case 11:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    current Player.y = 286;*/
                break;
                case 12:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    current Player.y = 240;*/
            }
        }
    }

    else if( getXCoordinate() >= 263 && getXCoordinate() <= 311 ){ //SWINFORD RAILROAD
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(194,532);
                    /*currentPlayer.x = 194; //chance inferior
                    current Player.y = 532;*/
                    break;
                case 3:
                    setCoordinates(148,532);
                    /*currentPlayer.x = 148; // lancetilla
                    c6rrent Player.y = 532;*/
                    break;
                case 4:
                    setCoordinates(102,532);
                    /*currentPlayer.x = 102; //panacam
                    current Player.y = 532;*/
                    break;
                case 5:
                    setCoordinates(40,532);
                    /*currentPlayer.x = 40; //in jail
                    current Player.y = 532;*/
                    break;
                case 6:
                    setCoordinates(40,471);
                    /*currentPlayer.x = 40;  //clarion
                    current Player.y = 471;*/
                    break;
                case 7:
                    setCoordinates(40,425);
                    /*currentPlayer.x = 40; //electric
                    current Player.y = 425;*/
                    break;
                case 8:
                    setCoordinates(40,379);
                    /*currentPlayer.x = 40; //merendon
                    current Player.y = 379;*/
                    break;
                case 9:
                    setCoordinates(40,333);
                    /*currentPlayer.x = 40; //jardines
                    current Player.y = 333;*/
                    break;
                case 10:
                    setCoordinates(40,286);
                    /*currentPlayer.x = 40; //mining
                    cu1rent Player.y = 286;*/
                    break;
                case 11:
                    setCoordinates(40,240);
                    /*currentPlayer.x = 40; //foresta
                    current Player.y = 240;*/
                    break;
                case 12:
                    setCoordinates(40,194);
                    /*currentPlayer.x = 40; //community chest izquierdo
                    current Player.y = 194;*/
            }
        }
    }

    else if( getXCoordinate() >= 217 && getXCoordinate() <= 263 ){ //LA QUINTA
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(148,532);
                /*
                    currentPlayer.x = 148; // lancetilla
                    cUrrentPlayer.y = 532;*/
                    break;
                case 3:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    currentPlayer.y = 532;*/
                    break;
                case 4:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                    break;
                case 5:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                    break;
                case 6:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                    break;
                case 7:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                    break;
                case 8:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
                    break;
                case 9:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    cu1rentPlayer.y = 286;*/
                    break;
                case 10:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    currentPlayer.y = 240;*/
                    break;
                case 11:
                    setCoordinates(40,194);
                /*
                    currentPlayer.x = 40; //community chest izquierdo
                    currentPlayer.y = 194;*/
                    break;
                case 12:
                    setCoordinates(40,148);
                /*
                    currentPlayer.x = 40; //picacho
                    currentPlayer.y = 148;*/
            }
        }
    }

    else if(getXCoordinate() >= 171 && getXCoordinate() <= 217 ){ //LANCETILLA
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    current Player.y = 532;*/
                    break;
                case 3:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    current Player.y = 471;*/
                    break;
                case 4:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    current Player.y = 425;*/
                    break;
                case 5:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    current Player.y = 379;*/
                    break;
                case 6:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    current Player.y = 333;*/
                    break;
                case 7:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    cu1rent Player.y = 286;*/
                    break;
                case 8:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    current Player.y = 240;*/
                    break;
                case 9:
                    setCoordinates(40,194);
                /*
                    currentPlayer.x = 40; //community chest izquierdo
                    current Player.y = 194;*/
                    break;
                case 10:
                    setCoordinates(40,148);
                /*
                    currentPlayer.x = 40; //picacho
                    current Player.y = 148;*/
                    break;
                case 11:
                    setCoordinates(40,102);
                /*
                    currentPlayer.x = 40; //atlantida
                    current Player.y = 102;*/
                    break;
                case 12:
                    setCoordinates(40,40);              
                /*
                    currentPlayer.x = 40; //free parking
                    current Player.y = 40;*/            
            }
        }
    }

    else if( getXCoordinate() >= 171 && getXCoordinate() <= 217 ){ //CHANCE INFERIOR
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(102,532);
                /*
                    currentPlayer.x = 102; //panacam
                    currentPlayer.y = 532;*/
                    break;
                case 3:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                    break;
                case 4:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                    break;
                case 5:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                    break;
                case 6:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                    break;
                case 7:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
                    break;
                case 8:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    cu1rentPlayer.y = 286;*/
                    break;
                case 9:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    currentPlayer.y = 240;*/
                    break;
                case 10:
                    setCoordinates(40,194);
                /*
                    currentPlayer.x = 40; //community chest izquierdo
                    currentPlayer.y = 194;*/
                    break;
                case 11:
                    setCoordinates(40,148);
                /*
                    currentPlayer.x = 40; //picacho
                    currentPlayer.y = 148;*/
                    break;
                case 12:
                    setCoordinates(40,102);
                /*
                    currentPlayer.x = 40; //atlantida
                    currentPlayer.y = 102;*/
            }
        }
    }

    else if( getXCoordinate() >= 125 && getXCoordinate() <= 171 ){ //LANCETILLA
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(40,532);
                /*
                    currentPlayer.x = 40; //in jail
                    currentPlayer.y = 532;*/
                    break;
                case 3:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                    break;
                case 4:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                    break;
                case 5:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                    break;
                case 6:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
                    break;
                case 7:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    currentPlayer.y = 286;*/
                    break;
                case 8:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    currentPlayer.y = 240;*/
                    break;
                case 9:
                    setCoordinates(40,194);
                /*
                    currentPlayer.x = 40; //community chest izquierdo
                    currentPlayer.y = 194;*/
                    break;
                case 10:
                    setCoordinates(40,148);
                /*
                    currentPlayer.x = 40; //picacho
                    currentPlayer.y = 148;*/
                    break;
                case 11:
                    setCoordinates(40,102);
                /*
                    currentPlayer.x = 40; //atlantida
                    currentPlayer.y = 102;*/
                    break;
                case 12:
                    setCoordinates(40,40);
                /*
                    currentPlayer.x = 40; //free parking
                    currentPlayer.y = 40;*/
            }
        }
    }

    else if( getXCoordinate() >= 80 && getXCoordinate() <= 125 ){ //PANACAM
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){
            switch( rolldice){
                case 2:
                    setCoordinates(40,471);
                /*
                    currentPlayer.x = 40;  //clarion
                    currentPlayer.y = 471;*/
                    break;
                case 3:
                    setCoordinates(40,425);
                /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                    break;
                case 4:
                    setCoordinates(40,379);
                /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                    break;
                case 5:
                    setCoordinates(40,333);
                /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
                    break;
                case 6:
                    setCoordinates(40,286);
                /*
                    currentPlayer.x = 40; //mining
                    currentPlayer.y = 286;*/
                    break;
                case 7:
                    setCoordinates(40,240);
                /*
                    currentPlayer.x = 40; //foresta
                    currentPlayer.y = 240;*/
                    break;
                case 8:
                    setCoordinates(40,194);
                /*
                    currentPlayer.x = 40; //community chest izquierdo
                    currentPlayer.y = 194;*/
                    break;
                case 9:
                    setCoordinates(40,148);
                /*
                    currentPlayer.x = 40; //picacho
                    currentPlayer.y = 148;*/
                    break;
                case 10:
                    setCoordinates(40,102);
                /*
                    currentPlayer.x = 40; //atlantida
                    currentPlayer.y = 102;*/
                    break;
                case 11:
                    setCoordinates(40,40);
                /*
                    currentPlayer.x = 40; //free parking
                    currentPlayer.y = 40;*/
                    break;
                case 12:
                    setCoordinates(40,103);
                /*
                    currentPlayer.x = 40; //omoa
                    currentPlayer.y = 103;*/
            }
        }
    }

    else if( getXCoordinate() >= 0 && getXCoordinate() <= 80 ){
        if(getYCoordinate() >= 492 && getYCoordinate() <= 572){ //IN JAIL - VISTING
            switch( rolldice){
                case 2:
                    setCoordinates(40,425);
                    /*
                    currentPlayer.x = 40; //electric
                    currentPlayer.y = 425;*/
                    break;
                case 3:
                    setCoordinates(40,379);
                    /*
                    currentPlayer.x = 40; //merendon
                    currentPlayer.y = 379;*/
                    break;
                case 4:
                    setCoordinates(40,333);
                    /*
                    currentPlayer.x = 40; //jardines
                    currentPlayer.y = 333;*/
                    break;
                case 5:
                    setCoordinates(40,286);
                    /*
                    currentPlayer.x = 40; //mining
                    currentPlayer.y = 286;*/
                    break;
                case 6:
                    setCoordinates(40,240);
                    /*
                    currentPlayer.x = 40; //foresta
                    currentPlayer.y = 240;*/
                    break;
                case 7:
                    setCoordinates(40,194);
                    /*
                    currentPlayer.x = 40; //community chest izquierdo
                    currentPlayer.y = 194;*/
                    break;
                case 8:
                    setCoordinates(40,148);
                    /*
                    currentPlayer.x = 40; //picacho
                    currentPlayer.y = 148;*/
                    break;
                case 9:
                    setCoordinates(40,102);
                    /*
                    currentPlayer.x = 40; //atlantida
                    currentPlayer.y = 102;*/
                    break;
                case 10:
                    setCoordinates(40,40);
                    /*
                    currentPlayer.x = 40; //free parking
                    currentPlayer.y = 40;*/
                    break;
                case 11:
                    setCoordinates(103,40);
                    /*
                    currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40;*/
                    break;
                case 12:
                    setCoordinates(148,40);
                    /*
                    currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40;*/
            }
        }
        else if( getYCoordinate() >= 448  &&  getYCoordinate() <= 492 ){ //CLARION
                switch( rolldice){
                    case 2:
                        setCoordinates(40,379); //merendon
                        /* currentPlayer.x = 40;
                        currentPlayer.y = 379; */
                    break;
                    case 3:
                        setCoordinates(40,333); //jardines
                        /* currentPlayer.x = 40;
                        currentPlayer.y = 333; */
                    break;
                    case 4:
                        setCoordinates(40,286);
                         //currentPlayer.x = 40; //mining
                        //currentPlayer.y = 286;
                    break;
                    case 5:
                        setCoordinates(40,240);
                        //currentPlayer.x = 40; //foresta
                        //currentPlayer.y = 240;
                    break;
                    case 6:
                        setCoordinates(40,194);
                        //currentPlayer.x = 40; //community chest izquierdo
                        //currentPlayer.y = 194;
                    break;
                    case 7:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 8:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 9:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 11:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 12:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                }
        }

        else if( getYCoordinate() >= 402  &&  getYCoordinate() <= 448 ){ //ELECTRIC COMPANY
                switch( rolldice){
                    case 2:
                        setCoordinates(40,333); //jardines
                        /* currentPlayer.x = 40;
                        currentPlayer.y = 333; */
                    break;
                    case 3:
                        setCoordinates(40,286);
                         //currentPlayer.x = 40; //mining
                        //currentPlayer.y = 286;
                    break;
                    case 4:
                        setCoordinates(40,240);
                        //currentPlayer.x = 40; //foresta
                        //currentPlayer.y = 240;
                    break;
                    case 5:
                        setCoordinates(40,194);
                        //currentPlayer.x = 40; //community chest izquierdo
                        //currentPlayer.y = 194;
                    break;
                    case 6:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 7:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    case 8:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 10:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 11:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                }
        }

        else if( getYCoordinate() >= 356  &&  getYCoordinate() <= 402 ){ //MERENDON AVENUE
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,286);
                         //currentPlayer.x = 40; //mining
                        //currentPlayer.y = 286;
                    break;
                    case 3:
                        setCoordinates(40,240);
                        //currentPlayer.x = 40; //foresta
                        //currentPlayer.y = 240;
                    break;
                    case 4:
                        setCoordinates(40,194);
                        //currentPlayer.x = 40; //community chest izquierdo
                        //currentPlayer.y = 194;
                    break;
                    case 5:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 6:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 7:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 9:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 10:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(286,40);
                        //currentPlayer.x = 286; //trinidad railroad
                        //currentPlayer.y = 40;
                }
        }

        else if(  getYCoordinate() >= 310  &&  getYCoordinate() <= 356 ){ //JARDINES AVENUE
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,240);
                        //currentPlayer.x = 40; //foresta
                        //currentPlayer.y = 240;
                    break;
                    case 3:
                        setCoordinates(40,194);
                        //currentPlayer.x = 40; //community chest izquierdo
                        //currentPlayer.y = 194;
                    break;
                    case 4:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 5:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 6:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 7:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 8:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 9:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(286,40);
                        //currentPlayer.x = 286; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                }
        }

        else if(  getYCoordinate() >= 263  &&  getYCoordinate() <= 310 ){ //MINING RAILROAD
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,194);
                        //currentPlayer.x = 40; //community chest izquierdo
                        //currentPlayer.y = 194;
                    break;
                    case 3:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 4:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 5:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 6:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 7:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 8:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                }
        }

        else if(  getYCoordinate() >= 217  &&  getYCoordinate() <= 263 ){ //FORESTA
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,148);
                        //currentPlayer.x = 40; //picacho
                        //currentPlayer.y = 148;
                    break;
                    case 3:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 4:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 5:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 6:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 7:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(426,40);
                        //currentPlayer.x = 426; //water works
                        //currentPlayer.y = 40;
                }
        }

        else if(  getYCoordinate() >= 171 &&  getYCoordinate() <= 217 ){ //COMMUNITY CHEST
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,102);
                        //currentPlayer.x = 40; //atlantida
                        //currentPlayer.y = 102;
                    break;
                    case 3:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 4:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 5:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 6:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 7:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(426,40);
                        //currentPlayer.x = 426; //water works
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(471,40);
                        //currentPlayer.x = 471; //pico bonito
                        //currentPlayer.y = 40;
                }
        }

        else if(  getYCoordinate() >= 125 && getYCoordinate()<= 171 ){ //PICACHO
                switch( rolldice ){
                    case 2:
                        setCoordinates(40,40);
                        //currentPlayer.x = 40; //free parking
                        //currentPlayer.y = 40;
                    break;
                    case 3:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 4:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 5:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 6:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 7:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(426,40);
                        //currentPlayer.x = 426; //water works
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(471,40);
                        //currentPlayer.x = 471; //pico bonito
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(532,40);
                        //currentPlayer.x = 515; //go to jail
                        //currentPlayer.y = 40;
                }
        }

        else if( getYCoordinate() >= 80 && getYCoordinate()<= 125 ){ //ATLANTIDA
                switch( rolldice ){
                    case 2:
                        setCoordinates(103,40);
                        /* currentPlayer.x = 103; //omoa
                        currentPlayer.y = 40; */
                    break;
                    case 3:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 4:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 5:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 6:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 7:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(426,40);
                        //currentPlayer.x = 426; //water works
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(471,40);
                        //currentPlayer.x = 471; //pico bonito
                        //currentPlayer.y = 40;
                    break;
                    case 11:
                        setCoordinates(532,40);
                        //currentPlayer.x = 515; //go to jail
                        //currentPlayer.y = 40;
                    break;
                    case 12:
                        setCoordinates(532,103);
                        //currentPlayer.x = 515; //utila
                        //currentPlayer.y = 40;
                }
        }

        else if( getYCoordinate() >= 0 && getYCoordinate()<= 80 ){ //FREE PARKING
                switch( rolldice ){
                    case 2:
                        setCoordinates(148,40);
                        /* currentPlayer.x = 148; //chance superior
                        currentPlayer.y = 40; */
                    break;
                    case 3:
                        setCoordinates(194,40);
                        //currentPlayer.x = 194; //sula
                        //currentPlayer.y = 40;
                    break;
                    case 4:
                        setCoordinates(240,40);
                        //currentPlayer.x = 240; //salvavida
                        //currentPlayer.y = 40;
                    break;
                    case 5:
                        setCoordinates(286,40);
                        //currentPlayer.x = 309; //trinidad railroad
                        //currentPlayer.y = 40;
                    break;
                    case 6:
                        setCoordinates(334,40);
                        //currentPlayer.x = 334; //la paz
                        //currentPlayer.y = 40;
                    break;
                    case 7:
                        setCoordinates(380,40);
                        //currentPlayer.x = 380; //valle de angeles
                        //currentPlayer.y = 40;
                    break;
                    case 8:
                        setCoordinates(426,40);
                        //currentPlayer.x = 426; //water works
                        //currentPlayer.y = 40;
                    break;
                    case 9:
                        setCoordinates(471,40);
                        //currentPlayer.x = 471; //pico bonito
                        //currentPlayer.y = 40;
                    break;
                    case 10:
                        setCoordinates(532,40);
                        //currentPlayer.x = 532; //go to jail
                        //currentPlayer.y = 40;
                    break;

                    case 11:
                        setCoordinates(532,103);
                        //currentPlayer.x = 532; //utila
                        //currentPlayer.y = 103;
                    break;
                    case 12:
                        setCoordinates(532,147);
                        //currentPlayer.x = 532; //guanaja
                        //currentPlayer.y = 103;
                }
        }

    }

    /*else if( getYCoordinate() >= 448  &&  getYCoordinate() <= 492 ){ //CLARION
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice){
                case 2:
                    setCoordinates(40,379); //merendon
                    /* currentPlayer.x = 40;
                    currentPlayer.y = 379; */
                /*break;
                case 3:
                    setCoordinates(40,333); //jardines
                    /* currentPlayer.x = 40;
                    currentPlayer.y = 333; */
                /*break;
                case 4:
                    setCoordinates(40,286);
                     //currentPlayer.x = 40; //mining
                    //currentPlayer.y = 286;
                break;
                case 5:
                    setCoordinates(40,240);
                    //currentPlayer.x = 40; //foresta
                    //currentPlayer.y = 240;
                break;
                case 6:
                    setCoordinates(40,194);
                    //currentPlayer.x = 40; //community chest izquierdo
                    //currentPlayer.y = 194;
                break;
                case 7:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 8:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 9:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 11:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 12:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
            }
        }
    }

    else if( getYCoordinate() >= 402  &&  getYCoordinate() <= 448 ){ //ELECTRIC COMPANY
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice){
                case 2:
                    setCoordinates(40,333); //jardines
                    /* currentPlayer.x = 40;
                    currentPlayer.y = 333; */
                /*break;
                case 3:
                    setCoordinates(40,286);
                     //currentPlayer.x = 40; //mining
                    //currentPlayer.y = 286;
                break;
                case 4:
                    setCoordinates(40,240);
                    //currentPlayer.x = 40; //foresta
                    //currentPlayer.y = 240;
                break;
                case 5:
                    setCoordinates(40,194);
                    //currentPlayer.x = 40; //community chest izquierdo
                    //currentPlayer.y = 194;
                break;
                case 6:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 7:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                case 8:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 10:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 11:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
            }
        }
    }

    else if( getYCoordinate() >= 356  &&  getYCoordinate() <= 402 ){ //MERENDON AVENUE
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,286);
                     //currentPlayer.x = 40; //mining
                    //currentPlayer.y = 286;
                break;
                case 3:
                    setCoordinates(40,240);
                    //currentPlayer.x = 40; //foresta
                    //currentPlayer.y = 240;
                break;
                case 4:
                    setCoordinates(40,194);
                    //currentPlayer.x = 40; //community chest izquierdo
                    //currentPlayer.y = 194;
                break;
                case 5:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 6:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 7:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 9:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 10:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(286,40);
                    //currentPlayer.x = 286; //trinidad railroad
                    //currentPlayer.y = 40;
            }
        }
    }

    else if(  getYCoordinate() >= 310  &&  getYCoordinate() <= 356 ){ //JARDINES AVENUE
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,240);
                    //currentPlayer.x = 40; //foresta
                    //currentPlayer.y = 240;
                break;
                case 3:
                    setCoordinates(40,194);
                    //currentPlayer.x = 40; //community chest izquierdo
                    //currentPlayer.y = 194;
                break;
                case 4:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 5:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 6:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 7:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 8:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 9:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(286,40);
                    //currentPlayer.x = 286; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
            }
        }
    }

    else if(  getYCoordinate() >= 263  &&  getYCoordinate() <= 310 ){ //MINING RAILROAD
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,194);
                    //currentPlayer.x = 40; //community chest izquierdo
                    //currentPlayer.y = 194;
                break;
                case 3:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 4:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 5:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 6:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 7:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 8:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
            }
        }
    }

    else if(  getYCoordinate() >= 217  &&  getYCoordinate() <= 263 ){ //FORESTA
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,148);
                    //currentPlayer.x = 40; //picacho
                    //currentPlayer.y = 148;
                break;
                case 3:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 4:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 5:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 6:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 7:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
            }
        }
    }

    else if(  getYCoordinate() >= 171 &&  getYCoordinate() <= 217 ){ //COMMUNITY CHEST
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,102);
                    //currentPlayer.x = 40; //atlantida
                    //currentPlayer.y = 102;
                break;
                case 3:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 4:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 5:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 6:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 7:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
            }
        }
    }

    else if(  getYCoordinate() >= 125 && getYCoordinate()<= 171 ){ //PICACHO
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(40,40);
                    //currentPlayer.x = 40; //free parking
                    //currentPlayer.y = 40;
                break;
                case 3:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 4:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 5:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 6:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 7:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(532,40);
                    //currentPlayer.x = 515; //go to jail
                    //currentPlayer.y = 40;
            }
        }
    }

    else if( getYCoordinate() >= 80 && getYCoordinate()<= 125 ){ //ATLANTIDA
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(103,40);
                    /* currentPlayer.x = 103; //omoa
                    currentPlayer.y = 40; */
                /*break;
                case 3:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 4:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 5:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 6:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 7:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                break;
                case 11:
                    setCoordinates(532,40);
                    //currentPlayer.x = 515; //go to jail
                    //currentPlayer.y = 40;
                break;
                case 12:
                    setCoordinates(532,103);
                    //currentPlayer.x = 515; //utila
                    //currentPlayer.y = 40;
            }
        }
    }

    else if( getYCoordinate() >= 0 && getYCoordinate()<= 80 ){ //FREE PARKING
        if(getXCoordinate() >= 0 && getXCoordinate() <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(148,40);
                    /* currentPlayer.x = 148; //chance superior
                    currentPlayer.y = 40; */
                /*break;
                case 3:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                break;
                case 4:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                break;
                case 5:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                break;
                case 6:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                break;
                case 7:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                break;
                case 8:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                break;
                case 9:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                break;
                case 10:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                break;

                case 11:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                break;
                case 12:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 103;
            }
        }
    }

//lo que sigue
/*
    if( x >=80 && x <=125 ){ //OMOA
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(194,40);
                    //currentPlayer.x = 194; //sula
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                case 5:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                case 6:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                case 7:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 8:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 9:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 10:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 11:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 12:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
            }
        }
    }

    if( x >=125 && x <= 171 ){ //CHANCE SUPERIOR
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(240,40);
                    //currentPlayer.x = 240; //salvavida
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                case 5:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                case 6:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 7:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 8:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 9:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 10:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 11:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 12:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
            }
        }
    }

    if( x >= 171 && x <= 217 ){ //SULA AVENUE
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(286,40);
                    //currentPlayer.x = 309; //trinidad railroad
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                case 5:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 6:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 7:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 8:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 9:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 10:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 11:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 12:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
            }
        }
    }

    if( x >= 217 && x <= 263 ){ //SALVAVIDA AVENUE
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(334,40);
                    //currentPlayer.x = 334; //la paz
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 5:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 6:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 7:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 8:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 9:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 10:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 11:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 12:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
            }
        }
    }

    if( x >= 263 && x <= 311 ){ //TRINIDAD RAILROAD
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(380,40);
                    //currentPlayer.x = 380; //valle de angeles
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 5:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 6:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 7:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 8:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 9:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 10:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 11:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
                case 12:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; //cortes
                    //currentPlayer.y = 379;
            }
        }
    }

    if( x >= 311 && x <= 357 ){ //LA PAZ AVENUE
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(426,40);
                    //currentPlayer.x = 426; //water works
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 4:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 5:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 6:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 7:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 8:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 9:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 10:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
                case 11:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; //cortes
                    //currentPlayer.y = 379;
                case 12:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; //war
                    //currentPlayer.y = 425;
            }
        }
    }


    if( x >= 357 && x <= 403 ){ //VALLE DE ANGELES AVENUE
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(471,40);
                    //currentPlayer.x = 471; //pico bonito
                    //currentPlayer.y = 40;
                case 3:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 4:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 5:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 6:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 7:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 8:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 9:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
                case 10:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; //cortes
                    //currentPlayer.y = 379;
                case 11:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; //war
                    //currentPlayer.y = 425;
                case 12:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; //la ceiba
                    //currentPlayer.y = 471;
            }
        }
    }

    if( x >= 403 && x <= 448 ){ //WATER WORKS
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,40);
                    //currentPlayer.x = 532; //go to jail
                    //currentPlayer.y = 40;
                    setCoordinates(40, 532);
                case 3:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 4:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 5:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 6:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 7:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 8:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
                case 9:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; //cortes
                    //currentPlayer.y = 379;
                case 10:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; //war
                    //currentPlayer.y = 425;
                case 11:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; //la ceiba
                    //currentPlayer.y = 471;
                case 12:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; //GO
                    //currentPlayer.y = 532;
            }
        }
    }

    if( x >= 448 && x <= 492 ){ //PICO BONITO AVENUE
        if(y >= 0 && y <= 80){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,103);
                    //currentPlayer.x = 532; //utila
                    //currentPlayer.y = 103;
                case 3:
                    setCoordinates(532,147);
                    //currentPlayer.x = 532; //guanaja
                    //currentPlayer.y = 147;
                case 4:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; //community chest
                    //currentPlayer.y = 194;
                case 5:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; //roatan
                    //currentPlayer.y = 240;
                case 6:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; //banana railroad
                    //currentPlayer.y = 286;
                case 7:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; //chance derecho
                    //currentPlayer.y = 333;
                case 8:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; //cortes
                    //currentPlayer.y = 379;
                case 9:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; //war
                    //currentPlayer.y = 425;
                case 10:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; //la ceiba
                    //currentPlayer.y = 471;
                case 11:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; //GO
                    //currentPlayer.y = 532;
                case 12:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; //olanchito
                    //currentPlayer.y = 532;
            }
        }
    }

    if( y >=80 && y <= 125 ){ //UTILA
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,194);
                    //currentPlayer.x = 532; community chest
                    //currentPlayer.y = 194;
                case 3:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; roatan
                    //currentPlayer.y = 240;
                case 4:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; banana railroad
                    //currentPlayer.y = 286;
                case 5:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; chance derecho
                    //currentPlayer.y = 333;
                case 6:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; cortes
                    //currentPlayer.y = 379;
                case 7:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                case 8:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                case 9:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                case 10:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                case 11:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                case 12:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
            }
        }
    }

    if(y >=125 && y <= 171){ //GUANAJA
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,240);
                    //currentPlayer.x = 532; roatan
                    //currentPlayer.y = 240;
                case 3:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; banana railroad
                    //currentPlayer.y = 286;
                case 4:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; chance derecho
                    //currentPlayer.y = 333;
                case 5:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; cortes
                    //currentPlayer.y = 379;
                case 6:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                case 7:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                case 8:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                case 9:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                case 10:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                case 11:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                case 12:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
            }
        }
    }

    if(y >= 171 &&  y <= 217){ //COMMUNITY CHEST
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,286);
                    //currentPlayer.x = 532; banana railroad
                    //currentPlayer.y = 286;
                    break;
                case 3:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; chance derecho
                    //currentPlayer.y = 333;
                    break;
                case 4:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; cortes
                    //currentPlayer.y = 379;
                    break;
                case 5:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                    break;
                case 6:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                    break;
                case 7:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }

    if(y >= 217  &&  y <= 263){ //ROATAN AVENUE
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,333);
                    //currentPlayer.x = 532; chance derecho
                    //currentPlayer.y = 333;
                    break;
                case 3:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; cortes
                    //currentPlayer.y = 379;
                    break;
                case 4:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                    break;
                case 5:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                    break;
                case 6:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }


    if(y >= 263  &&  y <= 310){ //BANANA RAILROAD
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,379);
                    //currentPlayer.x = 532; cortes
                    //currentPlayer.y = 379;
                    break;
                case 3:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                    break;
                case 4:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                    break;
                case 5:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 6:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(194,532);
                    //currentPlayer.x = 194; chance inferior
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }

    if(y >= 310  &&  y <= 356){ //CHANCE DERECHO
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,425);
                    //currentPlayer.x = 532; war
                    //currentPlayer.y = 425;
                    break;
                case 3:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                    break;
                case 4:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 5:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 6:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(194,532);
                    //currentPlayer.x = 194; chance inferior
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(148,532);
                    //currentPlayer.x = 148; lancetilla
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }

    if(y >= 356  &&  y <= 402){ //CORTES AVENUE
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,471);
                    //currentPlayer.x = 532; la ceiba
                    //currentPlayer.y = 471;
                    break;
                case 3:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 4:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 5:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 6:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(194,532);
                    //currentPlayer.x = 194; chance inferior
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(148,532);
                    //currentPlayer.x = 148; lancetilla
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(103,532);
                    //currentPlayer.x = 103; panacam
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }

    if(y >= 402  &&  y <= 448){ //WAR TAX
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(532,532);
                    //currentPlayer.x = 532; GO
                    //currentPlayer.y = 532;
                    break;
                case 3:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 4:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 5:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 6:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(194,532);
                    //currentPlayer.x = 194; chance inferior
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(148,532);
                    //currentPlayer.x = 148; lancetilla
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(103,532);
                    //currentPlayer.x = 103; panacam
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(40,532);
                    //currentPlayer.x = 40; in jail - visiting
                    //currentPlayer.y = 532;
                    break;
            }
        }
    }

    if(y >= 448  &&  y <= 492){ //LA CEIBA AVENUE
        if(x >= 492 && x <= 572){
            switch( rolldice ){
                case 2:
                    setCoordinates(471,532);
                    //currentPlayer.x = 471; olanchito
                    //currentPlayer.y = 532;
                    break;
                case 3:
                    setCoordinates(426,532);
                    //currentPlayer.x = 426; community chest
                    //currentPlayer.y = 532;
                    break;
                case 4:
                    setCoordinates(380,532);
                    //currentPlayer.x = 380; trujillo
                    //currentPlayer.y = 532;
                    break;
                case 5:
                    setCoordinates(334,532);
                    //currentPlayer.x = 334; income tax
                    //currentPlayer.y = 532;
                    break;
                case 6:
                    setCoordinates(286,532);
                    //currentPlayer.x = 286; swinford railroad
                    //currentPlayer.y = 532;
                    break;
                case 7:
                    setCoordinates(240,532);
                    //currentPlayer.x = 240; la quinta
                    //currentPlayer.y = 532;
                    break;
                case 8:
                    setCoordinates(194,532);
                    //currentPlayer.x = 194; chance inferior
                    //currentPlayer.y = 532;
                    break;
                case 9:
                    setCoordinates(148,532);
                    //currentPlayer.x = 148; lancetilla
                    //currentPlayer.y = 532;
                    break;
                case 10:
                    setCoordinates(103,532);
                    //currentPlayer.x = 103; panacam
                    //currentPlayer.y = 532;
                    break;
                case 11:
                    setCoordinates(40,532);
                    //currentPlayer.x = 40; in jail - visiting
                    //currentPlayer.y = 532;
                    break;
                case 12:
                    setCoordinates(40,471);
                    //currentPlayer.x = 40; clarion
                    //currentPlayer.y = 471;
                    break;
            }
        }
    }
            /*if(getXCoordinate()== 520 && getYCoordinate() ==520){
                if(dResult==11)
                    setCoordinates(10,460);
                else if(dResult==12)
                    setCoordinates(10,410);
                else if(dResult>=5)
                    setCoordinates(572-((50*dResult)+40),520);
                else
                    setCoordinates(572-((55*dResult)+40),520);
            }*/

}
