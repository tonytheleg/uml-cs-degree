/*
C’s preprocessor recognizes commands that allow the user to select parts of a program
to be compiled and parts to be omitted. This ability can be helpful in a variety of situ-
ations

you can use statements like
#if defined (VALUE)
    EXECUTE COMMANDS HERE
#endif

The commands will only be exected if VALUE is defined at top
with a #define statement
*/
#include <stdio.h>
#define DEBUG_MODE


int main(void)
{
    #if defined (TRACE)
        printf("Running in DEBUG mode\n");
    #endif

    for (int i = 0; i < 10; i++)
        {
            #if defined (DEBUG_MODE)
                printf("DEBUG: i is %d\n", i);
            #elif defined (INFO_MODE)
                printf("i is %d\n", i);
            #endif
        }
}