
#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__

#include "player.h"
using namespace std;


class controller{
	grid * gameboard;
    player * humanplayer;

    public:
    controller(grid * gb, player * pl);
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

};

#endif