
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "grid.h"
using namespace std;


class player{
public:
    player(int hp, int x,int y, int attack);
    ~player();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    int getX();
    int getY();
    virtual bool human() = 0;

protected:
    int hp;
    int xlocation,ylocation;
    int attackPerSecond;
};

#endif