#include "controller.h"
#include "game.h"

controller::controller(game *gb, player *pl) {
    gameObj = gb;
    humanplayer = pl;

}

void controller::moveUp(){

    int oldx = humanplayer->getX();
    int oldy = humanplayer->getY();
    if(!isLegal(oldx,oldy+1)){
        return;
    }
    gameObj->gameBoard->atLocation(oldx,oldy)->linkPlayer(nullptr);
    humanplayer->moveUp();
    gameObj->gameBoard->atLocation(humanplayer->getX(),humanplayer->getY())->linkPlayer(humanplayer);
}

void controller::moveDown(){
    int oldx = humanplayer->getX();
    int oldy = humanplayer->getY();
    if(!isLegal(oldx,oldy-1)){
        return;
    }
    gameObj->gameBoard->atLocation(oldx,oldy)->linkPlayer(nullptr);
    humanplayer->moveDown();
    gameObj->gameBoard->atLocation(humanplayer->getX(),humanplayer->getY())->linkPlayer(humanplayer);
}

void controller::moveLeft(){
    int oldx = humanplayer->getX();
    int oldy = humanplayer->getY();
    if(!isLegal(oldx-1,oldy)){
        return;
    }
    gameObj->gameBoard->atLocation(oldx,oldy)->linkPlayer(nullptr);
    humanplayer->moveLeft();
    gameObj->gameBoard->atLocation(humanplayer->getX(),humanplayer->getY())->linkPlayer(humanplayer);
}

void controller::moveRight(){
    int oldx = humanplayer->getX();
    int oldy = humanplayer->getY();
    if(!isLegal(oldx+1,oldy)){
        return;
    }
    gameObj->gameBoard->atLocation(oldx,oldy)->linkPlayer(nullptr);
    humanplayer->moveRight();
    gameObj->gameBoard->atLocation(humanplayer->getX(),humanplayer->getY())->linkPlayer(humanplayer);
}

bool controller::isLegal(int newX, int newY) {
    if(newX < 0 || newX >= gameObj->gameBoard->width || newY < 0 || newY > gameObj->gameBoard->length){
        return false;
    }
    return true;
}



