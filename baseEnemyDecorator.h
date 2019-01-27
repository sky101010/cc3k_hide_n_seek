
#ifndef __BASEEMYDCRT_H__
#define __BASEEMYDCRT_H__

#include "baseEnemy.h"
using namespace std;


class baseEnemyDecorator : baseEnemy{
    protected:
    baseEnemy * base;

    public:
	
    baseEnemyDecorator(baseEnemy * e);
    void attack();

};

#endif