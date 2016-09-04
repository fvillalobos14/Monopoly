#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "properties.h"


class Game {
public:
    Game();
    int dice();
    Player getPlayerInTurn();
    void setPlayerInTurn(Player p1, Player p2, Player p3, Player p4);
    //Properties getProps();

private:
    Player playerInTurn;
    //Properties[] props;

};


#endif // GAME_H
