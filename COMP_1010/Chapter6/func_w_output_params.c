#include <stdio.h>
#include <math.h>

void separate(double num, char *signp, int *wholep, double *fracp);

int main(void)
{
    double value;   // input number to analyze
    char sn;        // sign of value (-,+)
    int whl;        // whole number magnitude of value
    double fr;      // fractional part of value

    // Get data
    printf("Enter a value to analyze: ");
    scanf("%lf", &value);

    // Separeate values into 3 parts
    separate(value, &sn, &whl, &fr);

    printf("Parts of %.4f\n sign: %c\n", value, sn);
    printf(" whole number magnitude: %d\n", whl);
    printf(" fractional part: %.4f\n", fr);

    return (0);
}

/* Separates a number into three parts: the sign (+,- or blank),
a whole number magnitude and a frational part
You'll notice that separate returns no value at all. This is to 
showcase passing pointers to a function call to change the values
or pass by reference instead of pass by value!
*/

void separate(double num, char *signp, int *wholep, double *fracp)
{
    double magnitude;
    
    // determines sign
    if (num < 0)
        *signp = '-';
    else if (num == 0)
        *signp = ' ';
    else
        *signp = '+';

    // finds magnitude of num (absolute value) and 
    // separates into whole and fractional parts
    magnitude = fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;
}
