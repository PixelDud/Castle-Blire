#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.c"
#include "castle.c"
#include "rooms/rooms.c"


void main(){
    int hall[4] = {1,4,5,6};
    
    bootSequence();
    
    fadeO(2);
    displayRoom(hall[0]);
    fadeI(2);
    
    while(1 == 1){
        waitpad(J_UP);
        fadeO(2);
        displayRoom(hall[rand() % 4 + 1]);
        fadeI(2);
    }
}