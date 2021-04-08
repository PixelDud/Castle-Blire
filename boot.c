// boot.c - Castle Blire boot sequence
// Can be reused with other projects
#include <gb/gb.h>
#include <stdio.h>
#include "utilities.h"
#include "backgrounds/boot_data.c"
#include "backgrounds/boot_map.c"
#include "backgrounds/title_data.c"
#include "backgrounds/title_map.c"
int fadeDelay = 10;

// It is what it says...
void bootSequence(){
    SHOW_BKG;
    DISPLAY_ON;
    
    set_bkg_data(0, 114, boot_data);
    set_bkg_tiles(0, 0, 20, 18, boot_map);
    
    delayGame(125);
    
    fadeO(fadeDelay);
    
    set_bkg_data(0, 114, title_data);
    set_bkg_tiles(0, 0, 20, 18, title_map);
    
    fadeI(fadeDelay);
    
    waitpad(J_START);
}
