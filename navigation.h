
#include <gb/gb.h>

#ifndef _NAVIGATION_H
#define _NAVIGATION_H

int location();
void updateSight(int, int, int);
void validateMove(int, int, int);
void navigate(int);


struct Location {
    int x; // x position
    int y; // y position
    int r; // player rotation
};

extern struct Location player;

#endif
