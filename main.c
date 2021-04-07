#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.c"
#include "navigation.c"
// Sets the fade delay
int wait = 2;

void main(){
    bootSequence();
    
    updateSight(location(), player.r, wait);
    
    while(1){
        navigate(wait);
    }
}