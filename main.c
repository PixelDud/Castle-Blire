#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.c"
#include "navigation.c"

int wait = 2;

void main(){
    int hall[4] = {1,4,5,6};
    
    bootSequence();
    
    updateSight(location(), player.r, wait);
    
    while(1){
        navigate(wait);
    }
}