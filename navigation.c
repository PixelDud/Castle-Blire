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

// Define movements
int moveUp = (player[0], player[1] + 1, 0);
int moveDown = (player[0], player[1] - 1, 2);
int moveLeft = (player[0] - 1, player[1], 1);
int moveRight = (player[0] + 1, player[1], 3);

struct {
    int x; // x position
    int y; // y position
    int r; // player rotation
} player;

player.x = 6;
player.y = 6;
player.r = 1;


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


void updateSight(int room, int direction){
    if(direction == 0){
        if(room == 1){
            displayRoom(1);
        }
        else if(room == 4){
            displayRoom(3);
        }
        else if(room == 5){
            displayRoom(2);
        }
        else if(room == 7){
            displayRoom(5);
        }
        else if(room == 8){
            displayRoom(7);
        }
        else if(room == 9){
            displayRoom(4);
        }
        else if(room == 11){
            displayRoom(6);
        }
        else if(room == 14){
            displayRoom(0);
        }
    }
    else if(direction == 1){
        if(room == 2){
            displayRoom(1);
        }
        else if(room == 5){
            displayRoom(3);
        }
        else if(room == 6){
            displayRoom(2);
        }
        else if(room == 8){
            displayRoom(5);
        }
        else if(room == 9){
            displayRoom(7);
        }
        else if(room == 10){
            displayRoom(4);
        }
        else if(room == 11){
            displayRoom(6);
        }
        else if(room == 15){
            displayRoom(0);
        }
    }
    else if(direction == 2){
        if(room == 1){
            displayRoom(1);
        }
        else if(room == 3){
            displayRoom(2);
        }
        else if(room == 6){
            displayRoom(3);
        }
        else if(room == 7){
            displayRoom(4);
        }
        else if(room == 9){
            displayRoom(5);
        }
        else if(room == 10){
            displayRoom(7);
        }
        else if(room == 11){
            displayRoom(6);
        }
        else if(room == 12){
            displayRoom(0);
        }
    }
    else if(direction == 3){
        if(room == 2){
            displayRoom(1);
        }
        else if(room == 3){
            displayRoom(6);
        }
        else if(room == 4){
            displayRoom(2);
        }
        else if(room == 7){
            displayRoom(7);
        }
        else if(room == 8){
            displayRoom(4);
        }
        else if(room == 10){
            displayRoom(5);
        }
        else if(room == 11){
            displayRoom(6);
        }
        else if(room == 13){
            displayRoom(0);
        }
    }
}


void validateMove(int room, int input, int direction){
    if(room == 1){
        if(direction == 0){
            if(input == 2){
                player[] = moveUp;
            }
            if(input == 3){
                player[] = moveDown;
            }
        }
        else if(direction == 2){
            if(input == 0){
                player[] = moveDown;
            }
            if(input == 3){
                player[] = moveUp;
            }
        }
    }
    else if(room == 2){
        if(direction == 1){
            if(input == 2){
                player[] = moveRight;
            }
            else if(input == 3){
                player[] = moveLeft;
            }
        }
        else if(direction == 3){
            if(input == 2){
                player[] = moveLeft;
            }
            else if(input == 3){
                player[] = moveRight;
            }
        }
    }
    else if(room == 3){
        if(direction == 2){
            if(input == 0){
                player[] = moveRight;
            }
        }
        else if(direction == 3){
            if(input == 1){
                player[] = moveDown;
            }
        }
    }
    else if(room == 4){
        if(direction == 0){
            if(input == 0){
            }
        }
        else if(direction == 3){
            if(input == 0){
            }
        }
    }
    else if(room == 5){
        if(direction == 0){
            if(input == 0){
            }
        }
        else if(direction == 1){
            if(input == 0){
            }
        }
    }
    else if(room == 6){
        if(direction == 2){
            if(input == 0){
            }
            else{
            }
        }
        else if(direction == 1){
            if(input == 1){
            }
        }
    }
    
}


void navigate(){
    while(1){
        validateMove(location(), getInput(), player[2]));
        updateSight(location(), player[2]);
    }
}
