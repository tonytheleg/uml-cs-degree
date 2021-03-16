/* Write a statement that asks the user to type three integers and another statement that stores the three user responses into first , second , and third.
*/

#include <stdio.h>

int main(void)
{
    int first, second, third;

    printf("Enter your first integer: ");
    scanf("%d", &first);
    
    printf("Enter your second integer: ");
    scanf("%d", &second);
    
    printf("Enter your third integer: ");
    scanf("%d", &third);

    printf("Here are your respones\n");
    printf("First: %d\nSecond: %d\nThird: %d\n", first, second, third);

    return (0);
}