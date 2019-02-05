
#ifndef __GRID_H__
#define __GRID_H__

#include "spot.h"
#include <vector>
using namespace std;

class spot;
class grid{
protected:
    
    
    
public:
    int length;
    int width;
    vector<spot*> v;
    grid(int length, int width);
    ~grid();
    spot * atLocation(int x, int y);
};

#endif