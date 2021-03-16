/*
Write a statement that displays the following line with the value of the type int variable n before the period.
The value of n is ___________.

Assuming that side and area are type double variables containing the length of one side in cm and the area of a square in square cm, write a statement that will display this information in this form:
The area of a square whose side length is ______ cm is ______ square cm.
*/

#include <stdio.h>

int main(void)
{
    int n;
    double length, area;

    n = 37;
    length = 5;
    area = length * length;

    printf("The value of n is %d\n", n);
    printf("The area of a square whose side length is %lf cm is %lf square cm.\n", length, area);
 
    return (0);
}