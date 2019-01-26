
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "grid.h"
using namespace std;


class player{
protected:
	grid * gameBoard;
    int hp;
    int xlocation,ylocation;
    int attackPerSecond;
public:
    player(int hp, int x,int y, int attack);
    ~player();
    virtual bool human() = 0;
};

#endif