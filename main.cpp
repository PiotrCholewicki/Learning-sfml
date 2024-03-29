#include<iostream>
#include "Game.h"
int main(void) {
    
    Game game;
    //Game loop 
    while (game.isRunning()){
        //Event polling
        /*        

        */
        //Update
        game.update();
        //Render
        game.render();
        //Draw the game
        
    }
    //end of app
    return 0;
}