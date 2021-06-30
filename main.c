#include <stdio.h>
#include <rand.h>
#include <gb/gb.h>
#include "boot.h"
#include "navigation.h"

// Sets the fade delay
int wait = 2;

void main(){
    //bootSequence();

    while(1){
        navigate(wait);
    }
}
