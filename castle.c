// castle.c - Castle Blire itself stored as 2D arrays
#include <stdio.h>


int castle[9][8][8] = {
    { // Level One - castle[0][x][y]
        {13,  8, 15,  0, 13,  5,  0,  0},
        { 0,  7,  2,  8,  8, 10, 15,  0},
        { 0,  3,  8,  6,  7,  2,  5,  0},
        { 0,  4,  6,  0, 12,  0,  7,  5},
        {13, 10,  6,  2,  8,  2,  9,  1},
        { 0,  4,  6,  0,  1,  0, 12, 12},
        { 0,  1,  0,  4, 10,  2,  5,  0},
        { 0,  3,  2,  6,  0,  0,  3, 15}
    },
    { // Level Two - castle[1][x][y]
        { 0,  0,  0, 14,  0,  0,  0,  0},
        { 0,  4,  2,  9,  0,  0,  4, 15},
        { 0, 12,  0,  3,  2,  8,  9,  0},
        { 4, 15,  0,  0,  0,  1, 12,  0},
        { 3,  8,  2,  8,  8, 10, 15,  0},
        { 0, 12, 14,  1,  1,  0, 14,  0},
        { 0,  0,  3,  6,  1, 14,  1,  0},
        { 0,  0,  0,  0,  3, 10, 10, 15}
    },
    { // Level Three - castle[2][x][y]
        { 0,  0,  0, 14,  0,  4,  2,  5},
        { 0,  4,  2, 10,  2,  6,  0, 12},
        { 0,  3,  5,  0,  0,  0, 14,  0},
        { 0,  0,  3,  8,  2,  2,  9,  0},
        { 0, 13,  2,  9,  0,  0,  3,  5},
        { 0,  0,  0,  3, 15,  0,  0,  1},
        {13,  2,  5,  0,  0, 14,  0,  1},
        { 0,  0,  3,  2,  2, 10,  2,  6}
    },
    { // Level Four - castle[3][x][y]
        { 0,  0,  0,  0,  4, 15,  0,  0},
        { 0, 13,  2,  8, 10,  2,  5,  0},
        { 0,  0,  0,  1,  0,  0,  1,  0},
        { 4,  2,  8, 10,  5,  0,  3,  5},
        {12,  0, 12,  0,  1,  0,  0,  1},
        { 0,  0,  0,  0,  7, 15,  0,  1},
        {13,  2,  2,  5,  1,  0,  0, 12},
        { 0,  0,  0,  3,  6,  0,  0,  0}
    },
    { // Level Five - castle[4][x][y]
        {14,  0,  0,  4,  2, 15,  0, 14},
        { 1,  0,  0,  1,  0, 13,  8,  6},
        { 3,  2,  2,  9,  0,  0,  2,  0},
        { 0, 14, 13,  9,  0, 14,  7, 15},
        {13, 11,  2,  6, 13, 10,  9,  0},
        { 0,  1,  0,  0,  0,  4, 10,  5},
        { 0,  7,  2,  2,  8,  6,  0, 12},
        {13,  6,  0,  0, 12,  0,  0,  0}
    },
    { // Level Six - castle[5][x][y]
        {14,  0, 13,  5,  0, 14,  0,  0},
        { 1,  0,  0,  1,  0,  1, 14,  0},
        { 1,  0,  4, 10,  2, 10,  6,  0},
        { 7,  2,  9,  0,  0,  0,  0, 14},
        {12,  0,  7,  2, 15,  0, 13,  9},
        {13,  2,  9,  0, 14,  0,  0,  1},
        { 0, 13, 10,  2,  9,  0,  4,  6},
        { 0,  0,  0, 13, 10,  2,  6,  1}
    },
    { // Level Seven - castle[6][x][y]
        { 0,  0, 13,  8,  8,  2, 15, 14},
        { 0,  4,  2,  9,  1,  0,  0,  1},
        { 0, 12,  0, 12,  3,  8,  2,  6},
        { 0,  0,  0,  0,  0,  1,  0,  0},
        { 0,  0,  4,  2, 15,  1,  0, 14},
        {13,  8,  9,  0,  0,  7,  8,  6},
        { 0, 12,  1,  0,  0,  1, 12,  0},
        { 0,  0,  3,  2,  2,  6,  0,  0}
    },
    { // Level Eight - castle[7][x][y]
        { 0,  0,  0,  0,  4,  5,  0, 14},
        { 0,  0,  0, 14, 12,  7,  8,  6},
        { 0, 13,  8,  6,  0,  1, 12,  0},
        { 0,  0,  1,  0, 13,  9,  0,  0},
        { 0,  0,  7,  2,  2, 11,  2,  5},
        { 0, 13,  9,  0,  0, 12,  0,  1},
        { 4,  2, 10,  8,  5,  0, 14, 12},
        {12,  0,  0, 12,  3,  2,  6,  0}
    },
    { // Demo Level - castle[8][x][y]
        { 0,  0,  0,  0,  0,  0,  0,  0},
        { 0,  0,  0,  4,  2,  2,  5,  0},
        { 0,  0,  4,  6,  0,  0,  1,  0},
        { 0,  4,  6,  0,  0,  0,  1,  0},
        { 0,  1,  0,  0,  0,  0,  1,  0},
        { 0,  1,  0,  0,  0,  0,  1,  0},
        { 0,  3,  2,  2,  2,  2,  6,  0},
        { 0,  0,  0,  0,  0,  0,  0,  0}
    }
};