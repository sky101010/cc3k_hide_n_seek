#include "humanPlayer.h"


bool humanPlayer::human(){
    return true;
}

humanPlayer :: humanPlayer(int hp, int x,int y, int attack) : player(hp,x,y,attack){};