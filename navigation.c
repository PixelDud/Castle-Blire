// navigation.c - Useful functions for Game Boy development
// Can be used with other projects
#include <gb/gb.h>
#include <stdio.h>
#include "castle.c"
#include "rooms/rooms.c"

// Define inputs
int right = 0;
int left = 1;
int up = 2;
int down = 3;
int start = 4;
int select = 5;
int a = 6;
int b = 7;
int level = 8;

struct Location {
    int x; // x position
    int y; // y position
    int r; // player rotation
};

struct Location player = {6, 6, 1};

/* Define movements
moveUp = {player.x, player.y + 1, player.r = 0}
moveDown = {player.x, player.y - 1, player.r = 2}
moveLeft = {player.x - 1, player.y, player.r = 1}
moveRight = {player.x + 1, player.y, player.r = 3}
*/


/* player.r represents direction
    0 = North
    1 = East
    2 = South
    3 = West
*/


int location(){
    return castle[level][player.x][player.y];
}


/* Room values
    0 = Empty
    1 = Vertical Hall
    2 = Horizontal Hall
    3 = Bottom Left Corner
    4 = Top Left Corner
    5 = Top Right Corner
    6 = Bottom Right Corner
    7 = -90 Degree T
    8 = T
    9 = 90 Degree T
    10 = 180 Degree T
    11 = 4-Way
    12 = Bottom End
    13 = Left End
    14 = Top End
    15 = Right End
*/


void updateSight(int room, int direction, int delay){
    if(direction == 0){
        if(room == 1){
            fadeO(delay);
            displayRoom(1);
            fadeI(delay);
        }
        else if(room == 4){
            fadeO(delay);
            displayRoom(3);
            fadeI(delay);
        }
        else if(room == 5){
            fadeO(delay);
            displayRoom(2);
            fadeI(delay);
        }
        else if(room == 7){
            fadeO(delay);
            displayRoom(5);
            fadeI(delay);
        }
        else if(room == 8){
            fadeO(delay);
            displayRoom(7);
            fadeI(delay);
        }
        else if(room == 9){
            fadeO(delay);
            displayRoom(4);
            fadeI(delay);
        }
        else if(room == 11){
            fadeO(delay);
            displayRoom(6);
            fadeI(delay);
        }
        else if(room == 14){
            fadeO(delay);
            displayRoom(0);
            fadeI(delay);
        }
    }
    else if(direction == 1){
        if(room == 2){
            fadeO(delay);
            displayRoom(1);
            fadeI(delay);
        }
        else if(room == 5){
            fadeO(delay);
            displayRoom(3);
            fadeI(delay);
        }
        else if(room == 6){
            fadeO(delay);
            displayRoom(2);
            fadeI(delay);
        }
        else if(room == 8){
            fadeO(delay);
            displayRoom(5);
            fadeI(delay);
        }
        else if(room == 9){
            fadeO(delay);
            displayRoom(7);
            fadeI(delay);
        }
        else if(room == 10){
            fadeO(delay);
            displayRoom(4);
            fadeI(delay);
        }
        else if(room == 11){
            fadeO(delay);
            displayRoom(6);
            fadeI(delay);
        }
        else if(room == 15){
            fadeO(delay);
            displayRoom(0);
            fadeI(delay);
        }
    }
    else if(direction == 2){
        if(room == 1){
            fadeO(delay);
            displayRoom(1);
            fadeI(delay);
        }
        else if(room == 3){
            fadeO(delay);
            displayRoom(2);
            fadeI(delay);
        }
        else if(room == 6){
            fadeO(delay);
            displayRoom(3);
        }
        else if(room == 7){
            fadeO(delay);
            displayRoom(4);
            fadeI(delay);
        }
        else if(room == 9){
            fadeO(delay);
            displayRoom(5);
            fadeI(delay);
        }
        else if(room == 10){
            fadeO(delay);
            displayRoom(7);
            fadeI(delay);
        }
        else if(room == 11){
            fadeO(delay);
            displayRoom(6);
            fadeI(delay);
        }
        else if(room == 12){
            fadeO(delay);
            displayRoom(0);
            fadeI(delay);
        }
    }
    else if(direction == 3){
        if(room == 2){
            fadeO(delay);
            displayRoom(1);
            fadeI(delay);
        }
        else if(room == 3){
            fadeO(delay);
            displayRoom(6);
            fadeI(delay);
        }
        else if(room == 4){
            fadeO(delay);
            displayRoom(2);
            fadeI(delay);
        }
        else if(room == 7){
            fadeO(delay);
            displayRoom(7);
            fadeI(delay);
        }
        else if(room == 8){
            fadeO(delay);
            displayRoom(4);
            fadeI(delay);
        }
        else if(room == 10){
            fadeO(delay);
            displayRoom(5);
            fadeI(delay);
        }
        else if(room == 11){
            fadeO(delay);
            displayRoom(6);
            fadeI(delay);
        }
        else if(room == 13){
            fadeO(delay);
            displayRoom(0);
            fadeI(delay);
        }
    }
}


void validateMove(int room, int input, int direction){
    if(room == 1){
        if(direction == 0){
            if(input == 2){
                player.y += 1;
                player.r = 0;
            }
            if(input == 3){
                player.y -= 1;
                player.r = 2;
            }
        }
        else if(direction == 2){
            if(input == 0){
                player.y -= 1;
                player.r = 2;
            }
            if(input == 3){
                player.y += 1;
                player.r = 0;
            }
        }
    }
    else if(room == 2){
        if(direction == 1){
            if(input == 2){
                player.x += 1;
                player.r = 3;
            }
            else if(input == 3){
                player.x - 1;
                player.r = 1;
            }
        }
        else if(direction == 3){
            if(input == 2){
                player.x - 1;
                player.r = 1;
            }
            else if(input == 3){
                player.x += 1;
                player.r = 3;
            }
        }
    }
    else if(room == 3){
        if(direction == 2){
            if(input == 0){
                player.x += 1;
                player.r = 3;
            }
        }
        else if(direction == 3){
            if(input == 0){
                player.y += 1;
                player.r = 0;
            }
        }
    }
    else if(room == 4){
        if(direction == 0){
            if(input == 0){
                player.x += 1;
                player.r = 3;
            }
        }
        else if(direction == 3){
            if(input == 1){
                player.y -= 1;
                player.r = 2;
            }
        }
    }
    else if(room == 5){
        if(direction == 0){
            if(input == 1){
                player.x - 1;
                player.r = 1;
            }
        }
        else if(direction == 1){
            if(input == 0){
                player.y -= 1;
                player.r = 2;
            }
        }
    }
    else if(room == 6){
        if(direction == 2){
            if(input == 0){
                player.x - 1;
                player.r = 1;
            }
            else{
            }
        }
        else if(direction == 1){
            if(input == 1){
                player.y += 1;
                player.r = 0;
            }
        }
    }
    
}


void navigate(int delay){
    validateMove(location(), getInput(), player.r);
    updateSight(location(), player.r, delay);
}
