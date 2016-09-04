#include "game.h"
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "properties.h"
#include "player.h"

using namespace std;


Game::Game(){
}

int Game::dice(){

    return 1 + ( rand() % ( 6 ) );
}

/*Player Game::getPlayerInTurn(){
    return playerInTurn;
}

/*void Game::setPlayerInTurn(Player p1, Player p2, Player p3, Player p4){
    for(int i=1; i<=4;i++){
        if(i == 1)
            *playerInTurn = p1;
        else if(i==2)
            *playerInTurn = p2;
        else if(i==3)
            *playerInTurn = p3;
        else
            *playerInTurn = p4;
    }
}*/
