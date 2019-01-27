

#ifndef __HMPLAYER_H__
#define __HMPLAYER_H__
#include "player.h";

using namespace std;


class humanPlayer : player{
    public:
    virtual bool human() = 0;
};

#endif