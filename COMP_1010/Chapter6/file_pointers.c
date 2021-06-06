#include <stdio.h>

int main(void)
{
    FILE *inp;      // pointer to input file
    FILE *outp;     // pointer to output file
    double item;
    int input_status;   //status value retured by fscanf

    // Prepare files for i/o
    inp = fopen("indata.txt", "r");
    outp = fopen("outdata.txt", "w");

    // input each item, format, and write
    input_status = fscanf(inp, "%lf", &item);
    while (input_status == 1) {
        fprintf(outp, "%.2f\n", item);
        input_status = fscanf(inp, "%lf", &item);
    }

    fclose(inp);
    fclose(outp);

    return (0);
}