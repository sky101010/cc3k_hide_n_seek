

#ifndef __HMPLAYER_H__
#define __HMPLAYER_H__
#include "player.h"

using namespace std;


class humanPlayer : public player{
public:
    humanPlayer(int hp, int x,int y, int attack);
    bool human();
};

#endif