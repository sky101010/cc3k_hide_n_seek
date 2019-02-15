#ifndef __SPOT_H__
#define __SPOT_H__
//#include "player.h"
class player;
class spot{
protected:
    
    int x,y;
public:
    player * occupant;
	spot(int xi ,int yi);
    void linkPlayer(player* p);
    ~spot();
};

#endif