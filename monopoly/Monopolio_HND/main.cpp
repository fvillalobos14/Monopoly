#include "opciones.h"
#include "player.h"
#include "time.h"
#include <QApplication>
#include "juego.h"

int main(int argc, char *argv[])
{
    srand(time(0));
    QApplication a(argc, argv);
    Juego *juego = new Juego();

    /*Player *p1 = new Player();
    Player *p2 = new Player();
    Player *p3 = new Player();
    Player *p4 = new Player();*/

    /*do{

    }while(juego->turno<4);*/

    /*for(int i = 1; i<=4; i++){
        if(i==1)
            juego->turno =1;
        else if(i==2)
            juego->turno =2;
        else if(i==3)
            juego->turno =3;
        else{
            juego->turno =4;
            //i=1;
        }
    }*/

    Opciones w;
    w.show();

    return a.exec();
}
