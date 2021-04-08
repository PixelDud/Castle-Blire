// utilities.c - Useful functions for Game Boy development
// Can be used with other projects
#include <gb/gb.h>
#include <stdio.h>
UINT8 i;

void delayGame(UINT8 loopCount){
    UINT8 ii;
    for(ii = 0; ii < loopCount; ii++){
        wait_vbl_done();
    }
}


void fadeO(UINT8 fadeSpeed){
    for(i=0;i<4;i++){
        switch(i){
            case 0:
                BGP_REG = 0xE4;
                break;
            case 1:
                BGP_REG = 0xF9;
                break;
            case 2:
                BGP_REG = 0xFE;
                break;
            case 3:
                BGP_REG = 0xFF;
                break;
        }
        delayGame(fadeSpeed);
    }
}


void fadeI(UINT8 fadeSpeed){
    for(i=0;i<4;i++){
        switch(i){
            case 0:
                BGP_REG = 0xFE;
                break;
            case 1:
                BGP_REG = 0xF9;
                break;
            case 2:
                BGP_REG = 0xE4;
                break;
        }
        delayGame(fadeSpeed);
    }
}


int getInput(){
	while(1){
        switch(joypad()){
            case J_RIGHT: // return 0 is RIGHT
                waitpadup(); // Wait for the player to release the button before processing.
                return 0;
            case J_LEFT: // return 1 is LEFT
                waitpadup();
                return 1;
            case J_UP: // return 2 is UP
                waitpadup();
                return 2;
            case J_DOWN: // return 3 is DOWN
                waitpadup();
                return 3;
            case J_START: // return 4 is START
                waitpadup();
                return 4;
            case J_SELECT: // return 5 is SELECT
                waitpadup();
                return 5;
            case J_A: // return 6 is A
                waitpadup();
                return 6;
            case J_B: // return 7 is B
                waitpadup();
                return 7;
            default:
                break;
		}
		wait_vbl_done(); // wait one frame before checking joypad input again
	}
}
