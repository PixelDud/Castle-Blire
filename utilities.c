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
                return 0;
                break;
            case J_LEFT: // return 1 is LEFT
                return 1;
                break;
            case J_UP: // return 2 is UP
                return 2;
                break;
            case J_DOWN: // return 3 is DOWN
                return 3;
                break;
            case J_START: // return 4 is START
                return 4;
                break;
            case J_SELECT: // return 5 is SELECT
                return 5;
                break;
            case J_A: // return 6 is A
                return 6;
                break;
            case J_B: // return 7 is B
                return 7;
                break;
            default:
                break;
		}
	}
}