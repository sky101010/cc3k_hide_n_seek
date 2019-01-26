
#ifndef __GRID_H__
#define __GRID_H__

#include "spot.h"
#include <vector>
using namespace std;


class grid{
protected:
    int length;
    int width;
    vector<spot*> v;
    
public:
    grid(int length, int width);
    ~grid();
};

#endif