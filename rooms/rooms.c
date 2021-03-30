// rooms.c - The various rooms making up Castle Blire
#include <gb/gb.h>
#include <stdio.h>
#include "variation0_data.c"
#include "variation0_map.c"
#include "variation1_data.c"
#include "variation1_map.c"
#include "variation2_data.c"
#include "variation2_map.c"
#include "variation3_data.c"
#include "variation3_map.c"
#include "variation4_data.c"
#include "variation4_map.c"
#include "variation5_data.c"
#include "variation5_map.c"
#include "variation6_data.c"
#include "variation6_map.c"
#include "variation7_data.c"
#include "variation7_map.c"


void roomZero(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 7, variation0_data);
    set_bkg_tiles(0, 0, 20, 18, variation0_map);
}


void roomOne(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 11, variation1_data);
    set_bkg_tiles(0, 0, 20, 18, variation1_map);
}


void roomTwo(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 12, variation2_data);
    set_bkg_tiles(0, 0, 20, 18, variation2_map);
}


void roomThree(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 12, variation3_data);
    set_bkg_tiles(0, 0, 20, 18, variation3_map);
}


void roomFour(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 16, variation4_data);
    set_bkg_tiles(0, 0, 20, 18, variation4_map);
}


void roomFive(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 16, variation5_data);
    set_bkg_tiles(0, 0, 20, 18, variation5_map);
}


void roomSix(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 20, variation6_data);
    set_bkg_tiles(0, 0, 20, 18, variation6_map);
}


void roomSeven(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 16, variation7_data);
    set_bkg_tiles(0, 0, 20, 18, variation7_map);
}


void displayRoom(int room){
    if(room == 0){
        roomZero();
    }
    else if(room == 1){
        roomOne();
    }
    else if(room == 2){
        roomTwo();
    }
    else if(room == 3){
        roomThree();
    }
    else if(room == 4){
        roomFour();
    }
    else if(room == 5){
        roomFive();
    }
    else if(room == 6){
        roomSix();
    }
    else if(room == 7){
        roomSeven();
    }
}
