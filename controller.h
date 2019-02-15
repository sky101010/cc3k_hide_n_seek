
#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "player.h"
using namespace std;

class game;
class controller{
	game * gameObj;
    player * humanplayer;

    public:
	bool isLegal(int newX, int newY);
    controller(game * g, player * pl);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

};

#endif