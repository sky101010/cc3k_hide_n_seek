
#ifndef __GRID_H__
#define __GRID_H__

#include "spot.h"

class grid{
protected:
    const static int length = 1000;
    const static int width = 800;
    spot g [length][width];
    
public:
    grid();
    ~grid();
};

#endif