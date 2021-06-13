#include <stdio.h>
#include <stdlib.h>

// Main now takes an argument count including program name
// and an array of pointers to strings allowing for 
// command-line arguments
int main(int argc, char *argv[])
{
    FILE *inp, *outp;
    char ch;

    // Verify argument count
    if (argc >= 3) {
        inp = fopen(argv[1], "r");
        if (inp == NULL) {
            printf("cannot open %s for input\n", argv[1]);
            exit(1);
        }
    }
  
    outp = fopen(argv[2], "w");
    if (outp == NULL) {
        printf("cannot open %s for output\n", argv[2]);
        exit(1);
    }
    
    for (ch = getc(inp); ch !=EOF; ch = getc(inp)) {
        putc(ch, outp);
    }

    // Close files
    fclose(inp);
    fclose(outp);
    printf("Copied %s to %s.\n", argv[1], argv[2]);
}