@REM Build the game:
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o main.o main.c
c:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o main.gb main.o

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