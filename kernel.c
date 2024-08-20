#include "string.h"
#include "screen.h"
#include "system.h"
#include "keyboard.h"

kmain()
{
        char* vidmem=(char*)0xb8000;
        vidmem[0] = 'H';
        vidmem[1] = 0x04;
        vidmem[2] = 'E';
        vidmem[3] = 0x04;

        clearScreen();

        while(1)
        {
                print("RedOS>");
                string input  = readStr();
        }
}
