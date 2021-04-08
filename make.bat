@REM Build the game:
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -o main.gb main.c boot.c castle.c navigation.c utilities.c rooms/rooms.c

@REM Clean up unnecessary files:
DEL *.lst
DEL *.o
DEL *.map
DEL *.sym
DEL *.noi
DEL *.ihx
DEL *.asm
DEL *.adb
DEL *.cdb
