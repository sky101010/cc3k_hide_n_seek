#include "game.h"


game :: game(int l, int w){
    this->gameBoard = new grid(l,w);

}

void game::addHumanPlayer(humanPlayer* human){
    gameBoard->atLocation(human->getX(), human->getY());
}


void game::addEnemyPlayer(baseEnemy* enemy){
    gameBoard->atLocation(enemy->getX(), enemy->getY());
}