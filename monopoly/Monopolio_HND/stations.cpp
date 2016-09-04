#include "stations.h"

Stations::Stations(string  n) : Properties(n){
    buyable = true;
}

void Stations::setRent(){
    if(quantity == 1){
        rent = 25;
    }else if(quantity == 2){
        rent = 50;
    }else if(quantity == 3){
        rent = 100;
    }else if(quantity == 4){
        rent = 200;
    }else{
        cout<<"Cantidad incorreta. Solo pueden existir entre 1-4 cantidades de estaciones."<<endl;
    }
}

