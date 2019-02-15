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
#include "game.h"
#include "controller.h"
using namespace std;




/*
 * Start executing here.
 *	 First initialize window.
 *	 Next loop responding to events.
 *	 Exit forcing window manager to clean up - cheesy, but easy.
 */
class baseEnemy;
int main ( int argc, char *argv[] ) {
    game* g = new game(20,30);

    humanPlayer* p1 = new humanPlayer(100,5,5,10);
    controller* gamecontroller = new controller(g,p1);

    g->addPlayer(p1);
    string in;
    cin>>in;

    while(in == "w" || in == "s" || in == "a" || in == "d"){
        if(in == "w"){
            gamecontroller->moveUp();
        }
        else if(in == "s"){
            gamecontroller->moveDown();
        }
        else if(in == "a"){
            gamecontroller->moveLeft();
        }
        else if(in == "d"){
            gamecontroller->moveRight();
        }
        g->print();
        cin>>in;
    }


}

