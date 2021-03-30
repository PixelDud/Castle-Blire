// castle.c - Castle Blire itself stored as 2D arrays
#include <stdio.h>


int castle[8][8] = {
    {1, 3, 1, 0, 1, 5, 0, 0},
    {0, 3, 2, 3, 3, 3, 1, 0},
    {0, 5, 3, 5, 3, 2, 5, 0},
    {0, 5, 5, 0, 1, 0, 3, 5},
    {1, 3, 3, 2, 3, 2, 3, 2},
    {0, 5, 5, 0, 2, 0, 1, 1},
    {0, 2, 0, 5, 3, 2, 5, 0},
    {0, 5, 2, 5, 0, 0, 5, 1}
};


void displayMap(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            printf("%d ", castle[i][j]);
        }
        printf("\n\n");
    }
}