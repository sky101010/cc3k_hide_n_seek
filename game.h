
#ifndef __GAME_H__
#define __GAME_H__

#include "grid.h"
#include "player.h"
using namespace std;


class game{
protected:
    grid * gameBoard;
    
public:
    game();
    ~game();
    bool winning();

};

#endif