/*
write a program that computes an employee’s gross salary given the hours worked and the hourly rate.
*/

#include <stdio.h>


int main(void) 
{
    double rate, hours, salary;

    printf("Enter hourly rate: ");
    scanf("%lf", &rate);
    printf("Enter number of hours worked this week: ");
    scanf("%lf", &hours);

    printf("Employees gross salary is $%.2lf\n", hours * rate);

    return (0);
}