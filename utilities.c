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