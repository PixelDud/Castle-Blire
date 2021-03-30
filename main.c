#include <gb/gb.h>
#include <stdio.h>
#include "boot.c"
#include "castle.c"
#include "rooms/rooms.c"


void main(){
    bootSequence();
    
    fadeO(1);
    
    roomZero();
   
    fadeI(1);
}