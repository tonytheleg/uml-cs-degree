#include <stdio.h>
#define STRSIZ 80

int main(void)
{
    char in_name[STRSIZ], out_name[STRSIZ];
    FILE *inp, *outp;
    char ch;

    // Get the name of the file to back up and open file for input

    printf("Enter name of a file to backup: ");
    for (scanf("%s", in_name); (inp = fopen(in_name, "r")) == NULL; scanf("%s", in_name)) 
    {
       printf("cannot open %s for input\n", in_name);
       printf("Re-enter file name: ");     
    }

    // Get name to use for the backup file
    printf("Enter the name of backup copy: ");
    for (scanf("%s", out_name); (outp = fopen(out_name, "w")) == NULL; scanf("%s", out_name)) 
    {
       printf("cannot open %s for output\n", out_name);
       printf("Re-enter file name: ");
    }

    for (ch = getc(inp); ch !=EOF; ch = getc(inp))
    {
        putc(ch, outp);
    }
    // Close files
    fclose(inp);
    fclose(outp);
    printf("Copied %s to %s.\n", in_name, out_name);
}