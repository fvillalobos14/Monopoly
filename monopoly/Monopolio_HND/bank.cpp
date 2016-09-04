#include "bank.h"

Bank::Bank()
{
            money = 100000;

            cartas[0] = *(new Carta());
            cartas[0].posicionXMenor = 492;
            cartas[0].posicionXMayor = 572;
            cartas[0].posicionYMenor = 492;
            cartas[0].posicionYMayor = 572;
            cartas[0].buyable = false;

            cartas[1] = *(new Properties("Olanchito Avenue"));
            cartas[1].posicionXMenor = 448;
            cartas[1].posicionXMayor = 492;
            cartas[1].posicionYMenor = 492;
            cartas[1].posicionYMayor = 572;
            cartas[1].setPrice(60);
            cartas[1].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/b1.png");

            cartas[2] = *(new Carta());
            cartas[2].posicionXMenor = 403;
            cartas[2].posicionXMayor = 448;
            cartas[2].posicionYMenor = 492;
            cartas[2].posicionYMayor = 572;
            cartas[2].buyable = false;

            cartas[3] = *(new Properties("Trujillo Avenue"));
            cartas[3].posicionXMenor = 357;
            cartas[3].posicionXMayor = 403;
            cartas[3].posicionYMenor = 492;
            cartas[3].posicionYMayor = 572;
            cartas[3].setPrice(60);
            cartas[3].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/b2.png");

            cartas[4] = *(new Carta());
            cartas[4].posicionXMenor = 311;
            cartas[4].posicionXMayor = 357;
            cartas[4].posicionYMenor = 492;
            cartas[4].posicionYMayor = 572;
            cartas[4].buyable = false;

            cartas[5] = *(new Stations("Swinford Railroad"));
            cartas[5].posicionXMenor = 263;
            cartas[5].posicionXMayor = 311;
            cartas[5].posicionYMenor = 492;
            cartas[5].posicionYMayor = 572;
            cartas[5].setPrice(200);
            cartas[5].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/f1.png");

            cartas[6] = *(new Properties("La Quinta Avenue"));
            cartas[6].posicionXMenor = 217;
            cartas[6].posicionXMayor = 263;
            cartas[6].posicionYMenor = 492;
            cartas[6].posicionYMayor = 572;
            cartas[6].setPrice(100);
            cartas[6].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/l1.png");

            cartas[7] = *(new Carta());
            cartas[7].posicionXMenor = 171;
            cartas[7].posicionXMayor = 217;
            cartas[7].posicionYMenor = 492;
            cartas[7].posicionYMayor = 572;
            cartas[7].buyable = false;

            cartas[8] = *(new Properties("Lancetilla Avenue"));
            cartas[8].posicionXMenor = 125;
            cartas[8].posicionXMayor = 171;
            cartas[8].posicionYMenor = 492;
            cartas[8].posicionYMayor = 572;
            cartas[8].setPrice(100);
            cartas[8].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/l2.png");

            cartas[9] = *(new Properties("Panacam Avenue"));
            cartas[9].posicionXMenor = 80;
            cartas[9].posicionXMayor = 125;
            cartas[9].posicionYMenor = 492;
            cartas[9].posicionYMayor = 572;
            cartas[9].setPrice(120);
            cartas[9].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/l3.png");


            cartas[10] = *(new Carta());
            cartas[10].posicionXMenor = 0;
            cartas[10].posicionXMayor = 80;
            cartas[10].posicionYMenor = 492;
            cartas[10].posicionYMayor = 572;
            cartas[10].buyable = false;

            cartas[11] = *(new Properties("Clarion Avenue"));
            cartas[11].posicionXMenor = 0;
            cartas[11].posicionXMayor = 80;
            cartas[11].posicionYMenor = 448;
            cartas[11].posicionYMayor = 492;
            cartas[11].setPrice(140);
            cartas[11].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/p1.png");

            cartas[12] = *(new Utilities("E.N.E.E"));
            cartas[12].posicionXMenor = 0;
            cartas[12].posicionXMayor = 80;
            cartas[12].posicionYMenor = 402;
            cartas[12].posicionYMayor = 448;
            cartas[12].setPrice(150);
            cartas[12].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/s1.png");

            cartas[13] = *(new Properties("Merendon Avenue"));
            cartas[13].posicionXMenor = 0;
            cartas[13].posicionXMayor = 80;
            cartas[13].posicionYMenor = 356;
            cartas[13].posicionYMayor = 402;
            cartas[13].setPrice(140);
            cartas[13].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/p2.png");

            cartas[14] = *(new Properties("Jardines Avenue"));
            cartas[14].posicionXMenor = 0;
            cartas[14].posicionXMayor = 80;
            cartas[14].posicionYMenor = 310;
            cartas[14].posicionYMayor = 356;
            cartas[14].setPrice(160);
            cartas[14].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/p3.png");

            cartas[15] = *(new Stations("Mining Railroad"));
            cartas[15].posicionXMenor = 0;
            cartas[15].posicionXMayor = 80;
            cartas[15].posicionYMenor = 263;
            cartas[15].posicionYMayor = 310;
            cartas[15].setPrice(200);
            cartas[15].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/f2.png");

            cartas[16] = *(new Properties("Foresta Avenue"));
            cartas[16].posicionXMenor = 0;
            cartas[16].posicionXMayor = 80;
            cartas[16].posicionYMenor = 217;
            cartas[16].posicionYMayor = 263;
            cartas[16].setPrice(180);
            cartas[16].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/o1.png");

            cartas[17] = *(new Carta());
            cartas[17].posicionXMenor = 0;
            cartas[17].posicionXMayor = 80;
            cartas[17].posicionYMenor = 171;
            cartas[17].posicionYMayor = 217;

            cartas[18] = *(new Properties("Picacho Avenue"));
            cartas[18].posicionXMenor = 0;
            cartas[18].posicionXMayor = 80;
            cartas[18].posicionYMenor = 125;
            cartas[18].posicionYMayor = 171;
            cartas[18].setPrice(180);
            cartas[18].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/o2.png");

            cartas[19] = *(new Properties("Atlantida Avenue"));
            cartas[19].posicionXMenor = 0;
            cartas[19].posicionXMayor = 80;
            cartas[19].posicionYMenor = 80;
            cartas[19].posicionYMayor = 125;
            cartas[19].setPrice(200);
            cartas[19].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/o3.png");

            cartas[20] = *(new Carta());
            cartas[20].posicionXMenor = 0;
            cartas[20].posicionXMayor = 80;
            cartas[20].posicionYMenor = 0;
            cartas[20].posicionYMayor = 80;
            cartas[20].buyable = false;

            cartas[21] = *(new Properties("Omoa Avenue"));
            cartas[21].posicionXMenor = 80;
            cartas[21].posicionXMayor = 125;
            cartas[21].posicionYMenor = 0;
            cartas[21].posicionYMayor = 80;
            cartas[21].setPrice(220);
            cartas[21].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/r1.png");

            cartas[22] = *(new Carta());
            cartas[22].posicionXMenor = 125;
            cartas[22].posicionXMayor = 171;
            cartas[22].posicionYMenor = 0;
            cartas[22].posicionYMayor = 80;
            cartas[22].buyable = false;

            cartas[23] = *(new Properties("Sula Avenue"));
            cartas[23].posicionXMenor = 171;
            cartas[23].posicionXMayor = 217;
            cartas[23].posicionYMenor = 0;
            cartas[23].posicionYMayor = 80;
            cartas[23].setPrice(220);
            cartas[23].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/r2.png");

            cartas[24] = *(new Properties("Salvavida Avenue"));
            cartas[24].posicionXMenor = 217;
            cartas[24].posicionXMayor = 263;
            cartas[24].posicionYMenor = 0;
            cartas[24].posicionYMayor = 80;
            cartas[24].setPrice(240);
            cartas[24].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/r3.png");

            cartas[25] = *(new Stations("Trinidad Railroad"));
            cartas[25].posicionXMenor = 263;
            cartas[25].posicionXMayor = 311;
            cartas[25].posicionYMenor = 0;
            cartas[25].posicionYMayor = 80;
            cartas[25].setPrice(200);
            cartas[25].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/f3.jpeg");

            cartas[26] = *(new Properties("La Paz Avenue"));
            cartas[26].posicionXMenor = 311;
            cartas[26].posicionXMayor = 357;
            cartas[26].posicionYMenor = 0;
            cartas[26].posicionYMayor = 80;
            cartas[26].setPrice(260);
            cartas[26].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/y1.png");

            cartas[27] = *(new Properties("Valle de Angeles Avenue"));
            cartas[27].posicionXMenor = 357;
            cartas[27].posicionXMayor = 403;
            cartas[27].posicionYMenor = 0;
            cartas[27].posicionYMayor = 80;
            cartas[27].setPrice(260);
            cartas[27].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/y2.png");

            cartas[28] = *(new Utilities("Water Works"));
            cartas[28].posicionXMenor = 403;
            cartas[28].posicionXMayor = 448;
            cartas[28].posicionYMenor = 0;
            cartas[28].posicionYMayor = 80;
            cartas[28].setPrice(150);
            cartas[28].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/s2.png");

            cartas[29] = *(new Properties("Pico Bonito Avenue"));
            cartas[29].posicionXMenor = 448;
            cartas[29].posicionXMayor = 492;
            cartas[29].posicionYMenor = 0;
            cartas[29].posicionYMayor = 80;
            cartas[29].setPrice(280);
            cartas[29].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/y3.png");

            cartas[30] = *(new Carta());
            cartas[30].posicionXMenor = 492;
            cartas[30].posicionXMayor = 572;
            cartas[30].posicionYMenor = 0;
            cartas[30].posicionYMayor = 80;
            cartas[30].buyable = false;

            cartas[31] = *(new Properties("Utila Avenue"));
            cartas[31].posicionXMenor = 492;
            cartas[31].posicionXMayor = 572;
            cartas[31].posicionYMenor = 80;
            cartas[31].posicionYMayor = 125;
            cartas[31].setPrice(300);
            cartas[31].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/g1.png");

            cartas[32] = *(new Properties("Guanaja Avenue"));
            cartas[32].posicionXMenor = 492;
            cartas[32].posicionXMayor = 572;
            cartas[32].posicionYMenor = 125;
            cartas[32].posicionYMayor = 171;
            cartas[32].setPrice(300);
            cartas[32].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/g2.png");

            cartas[33] = *(new Carta());
            cartas[33].posicionXMenor = 492;
            cartas[33].posicionXMayor = 572;
            cartas[33].posicionYMenor = 171;
            cartas[33].posicionYMayor = 217;
            cartas[33].buyable = false;

            cartas[34] = *(new Properties("Roatan Avenue"));
            cartas[34].posicionXMenor = 492;
            cartas[34].posicionXMayor = 572;
            cartas[34].posicionYMenor = 217;
            cartas[34].posicionYMayor = 263;
            cartas[34].setPrice(320);
            cartas[34].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/g3.png");

            cartas[35] = *(new Stations("Banana Railroad"));
            cartas[35].posicionXMenor = 492;
            cartas[35].posicionXMayor = 572;
            cartas[35].posicionYMenor = 263;
            cartas[35].posicionYMayor = 310;
            cartas[35].setPrice(200);
            cartas[35].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/f4.png");

            cartas[36] = *(new Carta());
            cartas[36].posicionXMenor = 492;
            cartas[36].posicionXMayor = 572;
            cartas[36].posicionYMenor = 310;
            cartas[36].posicionYMayor = 356;
            cartas[36].buyable = false;

            cartas[37] = *(new Properties("Cortes Avenue"));
            cartas[37].posicionXMenor = 492;
            cartas[37].posicionXMayor = 572;
            cartas[37].posicionYMenor = 356;
            cartas[37].posicionYMayor = 402;
            cartas[37].setPrice(350);
            cartas[37].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/d1.png");

            cartas[38] = *(new Carta());
            cartas[38].posicionXMenor = 492;
            cartas[38].posicionXMayor = 572;
            cartas[38].posicionYMenor = 402;
            cartas[38].posicionYMayor = 448;
            cartas[38].buyable = false;

            cartas[39] = *(new Properties("La Ceiba Avenue"));
            cartas[39].posicionXMenor = 492;
            cartas[39].posicionXMayor = 572;
            cartas[39].posicionYMenor = 448;
            cartas[39].posicionYMayor = 492;
            cartas[39].setPrice(400);
            cartas[39].imagen = new QPixmap("/Users/Francis/Desktop/monopoly/Monopolio_HND/properties/d2.png");
}

int Bank::searchForProp(Player *p){
    for(int i = 0 ; i < 40 ; i++){
        if(p->getXCoordinate() >= cartas[i].posicionXMenor && p->getXCoordinate() <= cartas[i].posicionXMayor){
            if(p->getYCoordinate() >= cartas[i].posicionYMenor && p->getYCoordinate() <= cartas[i].posicionYMayor){
                return i;
            }
        }
    }

    return 0;
}

void Bank::substractMoney(){
    money = money - 200;
    cout<<"New Bank Balance after Go: "<<money<<endl;
}

void Bank::addWarTaxes(){
    money = money + 100;
    cout<<"New Bank Balance after War Tax: "<<money<<endl;
}

void Bank::addIncomeTaxes(){
    money = money + 200;
    cout<<"New Bank Balance after Income Tax: "<<money<<endl;
}

void Bank::liberarPreso(){
    money+=50;
}



