#ifndef KB_H
#define KB_H
#include "screen.h"
#include "system.h"
#include "types.h"

string readStr()
{
    char buff;
    string buffstr;
    uint8 i = 0;
    uint8 reading = 1;
    while(reading)
    {
        if(inportb(0x64) & 0x1)                 
        {
            switch(inportb(0x60))
            {
                case 4:  buffstr[i] = 'a'; printch('a'); i++; break;
                case 5:  buffstr[i] = 'b'; printch('b'); i++; break;
                case 6:  buffstr[i] = 'c'; printch('c'); i++; break;
                case 7:  buffstr[i] = 'd'; printch('d'); i++; break;
                case 8:  buffstr[i] = 'e'; printch('e'); i++; break;
                case 9:  buffstr[i] = 'f'; printch('f'); i++; break;
                case 10: buffstr[i] = 'g'; printch('g'); i++; break;
                case 11: buffstr[i] = 'h'; printch('h'); i++; break;
                case 12: buffstr[i] = 'i'; printch('i'); i++; break;
                case 13: buffstr[i] = 'j'; printch('j'); i++; break;
                case 14: buffstr[i] = 'k'; printch('k'); i++; break;
                case 15: buffstr[i] = 'l'; printch('l'); i++; break;
                case 16: buffstr[i] = 'm'; printch('m'); i++; break;
                case 17: buffstr[i] = 'n'; printch('n'); i++; break;
                case 18: buffstr[i] = 'o'; printch('o'); i++; break;
                case 19: buffstr[i] = 'p'; printch('p'); i++; break;
                case 20: buffstr[i] = 'q'; printch('q'); i++; break;
                case 21: buffstr[i] = 'r'; printch('r'); i++; break;
                case 22: buffstr[i] = 's'; printch('s'); i++; break;
                case 23: buffstr[i] = 't'; printch('t'); i++; break;
                case 24: buffstr[i] = 'u'; printch('u'); i++; break;
                case 25: buffstr[i] = 'v'; printch('v'); i++; break;
                case 26: buffstr[i] = 'w'; printch('w'); i++; break;
                case 27: buffstr[i] = 'x'; printch('x'); i++; break;
                case 28: buffstr[i] = 'y'; printch('y'); i++; break;
                case 29: buffstr[i] = 'z'; printch('z'); i++; break;
                case 30: buffstr[i] = '1'; printch('1'); i++; break;
                case 31: buffstr[i] = '2'; printch('2'); i++; break;
                case 32: buffstr[i] = '3'; printch('3'); i++; break;
                case 33: buffstr[i] = '4'; printch('4'); i++; break;
                case 34: buffstr[i] = '5'; printch('5'); i++; break;
                case 35: buffstr[i] = '6'; printch('6'); i++; break;
                case 36: buffstr[i] = '7'; printch('7'); i++; break;
                case 37: buffstr[i] = '8'; printch('8'); i++; break;
                case 38: buffstr[i] = '9'; printch('9'); i++; break;
                case 39: buffstr[i] = '0'; printch('0'); i++; break;
                case 40: buffstr[i] = '-'; printch('-'); i++; break;
                case 41: buffstr[i] = '='; printch('='); i++; break;
                case 43: buffstr[i] = '['; printch('['); i++; break;
                case 44: buffstr[i] = ']'; printch(']'); i++; break;
                case 46: buffstr[i] = ';'; printch(';'); i++; break;
                case 47: buffstr[i] = '\''; printch('\''); i++; break;
                case 50: buffstr[i] = '\\'; printch('\\'); i++; break;
                case 51: buffstr[i] = '#'; printch('#'); i++; break;
                case 52: buffstr[i] = ' '; printch(' '); i++; break;
                case 54: buffstr[i] = '\n'; printch('\n'); i++; reading = 0; break;
                case 57: buffstr[i] = ','; printch(','); i++; break;
                case 58: buffstr[i] = '.'; printch('.'); i++; break;
                case 59: buffstr[i] = '/'; printch('/'); i++; break;
                case 60: buffstr[i] = '\b'; printch('\b'); i--; buffstr[i] = 0; break;
                default: break;
            }
        }
    }
    buffstr[i] = 0;                   
    return buffstr;
}
#endif
