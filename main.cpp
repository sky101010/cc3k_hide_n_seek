/*
 CS 349 A1 Skeleton Code - Snake
 
 - - - - - - - - - - - - - - - - - - - - - -
 
 Commands to compile and run:
 
 g++ -o snake snake.cpp -L/usr/X11R6/lib -lX11 -lstdc++
 ./snake
 
 Note: the -L option and -lstdc++ may not be needed on some machines.
 */

#include <iostream>
#include <list>
#include <cstdlib>
#include <sys/time.h>
#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <sstream>
#include <vector>
#include <map>

/*
 * Header files for X functions
 */
#include <X11/Xlib.h>
#include <X11/Xutil.h>

////
#include "grid.h"
using namespace std;



/*
 * Start executing here.
 *	 First initialize window.
 *	 Next loop responding to events.
 *	 Exit forcing window manager to clean up - cheesy, but easy.
 */
int main ( int argc, char *argv[] ) {
    grid gameboard ();


}

