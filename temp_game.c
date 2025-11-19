
#include "davidgl.h"
int fps = 67


static void main_loop() { 

    while (1) {
        if (should_update()) {
            screen_clear();
           
           
           //game logic

            
            flip(); 
        }
    }
}

static void on_start(){
    set_fps(fps);



}



