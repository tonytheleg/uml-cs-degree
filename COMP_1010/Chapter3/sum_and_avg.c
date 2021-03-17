/*
Add refinements to the program outline that follows and write the final C ­program.

    // Compute the sum and average of two numbers.
    
    #include <stdio.h>
    int main(void)
    {
        double one, two, // input - numbers to process
        sum,             // output - sum of one and two
        average;         // output - average of one and two
        
        // Get two numbers.
        // Compute sum of numbers.
        // Compute average of numbers.
        // Display sum and average.
        
        return (0);
    }
*/
#include <stdio.h>

int main(void)
{
    double one, two, sum, average;

    printf("Enter a number: ");
    scanf("%lf", &one);
    printf("Enter a another number: ");
    scanf("%lf", &two);

    printf("The sum of %.2lf and %.2lf is %.2lf\n", one, two, one + two);
    printf("The average of %.2lf and %.2lf is %.2lf\n", one, two, (one + two) / 2);
        
    return (0);
}
