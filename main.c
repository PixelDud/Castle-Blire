#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.c"
#include "castle.c"
#include "rooms/rooms.c"


void main(){
    int hall[4] = {1,4,5,6};
    int randomIndex = rand() % 4 + 1;
    
    bootSequence();
    
    while(1 == 1){
        fadeO(2);
        displayRoom(hall[rand() % 4 + 1]);
        fadeI(2);
        waitpad(J_UP);
    }
}