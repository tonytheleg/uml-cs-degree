/*
Write a program that asks the user to enter the radius of a circle and then computes and displays the circle’s area. Use the formula Area = PI x Radius x Radius where PI is the constant macro 3.14159.
*/

#include <stdio.h>
#define PI 3.14159

int main(void) 
{

    double radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The area of your circle is %lf\n", area);

    return (0);
}