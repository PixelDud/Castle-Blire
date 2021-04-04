#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.c"
#include "navigation.c"


void main(){
    int hall[4] = {1,4,5,6};
    
    bootSequence();
    
    fadeO(2);
    printf("%d", &location());
    fadeI(2);
    
    while(1){
        navigation();
        fadeO(2);
        printf("%d", &location());
        fadeI(2);
    }
}