#include "string.h"
#include "screen.h"
#include "system.h"
#include "keyboard.h"

// checklist for what main parts in a kernel are:
// 1. Memory Management: allocate & free memory, handle virtual memory, page tables, etc.
// 2. Process Management: create, run, kill, schedule threads, handle interrupts, etc.
// 3. File System Management: mount, read, write, delete, etc.
// 4. Interrupt Handling: handle hardware interrupts, software interrupts, etc.
// 5. System Calls: provide an interface for applications to access kernel services (e.g. read(), write(), etc.)
// 6. Security: handle permissions, access control, etc.
// 7. Networking: handle network connections, send / receive data, etc.


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
