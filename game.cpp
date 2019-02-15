#include "game.h"
#include <iostream>

game :: game(int l, int w){
    this->gameBoard = new grid(l,w);

}

game :: ~game(){}

void game::addPlayer(humanPlayer* human){
    spot * s = gameBoard->atLocation(human->getX(), human->getY());
    s->linkPlayer(human);
}

void game::print(){
    for(int i = gameBoard->v.size() - 1; i >= 0 ;--i){
        spot * temp = gameBoard->v.at(i);
        if((i % gameBoard->width) == 0){
            cout<<"\n";
        }
        if(temp->occupant != NULL){
            cout << "!";
        }
        else{
            cout<<"#";
        }
    }
}
