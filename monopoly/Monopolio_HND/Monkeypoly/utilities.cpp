#include "utilities.h"

Utilities::Utilities(string n) : Properties(n){

}

void Utilities::setRent(int d){
    if(quantity == 1){
        rent = d * 4;
    }else if(quantity == 2){
        rent = d * 10;
    }else{
        cout<<"Cantidad incorrecta. Solo puede existir un máximo de dos utilidades."<<endl;
    }
}

