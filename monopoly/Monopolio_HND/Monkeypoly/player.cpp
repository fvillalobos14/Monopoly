#include "player.h"

bool Player::getInJail() const
{
    return inJail;
}

void Player::setInJail(bool value)
{
    inJail = value;
}

Player::Player(string n){
    name = n;
    saldo = 1500;
    posicion = 0;
}

Player::~Player()
{
    
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

void Player::setInJail()
{

}
