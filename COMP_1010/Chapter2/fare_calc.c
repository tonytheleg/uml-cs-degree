/*
Write a program that calculates taxi fare at a rate of $1.50 per mile. Your program should interact with the user in this manner:
TAXI FARE CALCULATOR 
Enter beginning odometer reading=> 78602.5
Enter ending odometer reading=> 78622.7
You traveled a distance of 20.2 miles. At $1.50 per mile, your fare is $30.30.
*/

#include <stdio.h>
#define FARE_RATE 1.50

int main(void)
{
    double odo_start, odo_finish, distance, total_fare;

    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &odo_start);
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &odo_finish);

    distance = odo_finish - odo_start;
    total_fare = distance * FARE_RATE;

    printf("You traveled a distance of %.1lf miles. At $%.2lf per mile, your fare is $%2.2lf\n", distance, FARE_RATE, total_fare);

    return (0);
}