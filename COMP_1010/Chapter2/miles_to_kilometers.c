/*
* Converts distances from miles to kilometers
*/

/*
Preprocessor directivces: gives commands to the C preprocessor whose job is to modify the text of a C program before it is compiled
#include gives access to a library, #defines a constant which replaces each occurance with the value assigned
*/

#include <stdio.h> 
#define KMS_PER_MILE 1.609 

// the below 'main' takes no paramters (void) and returns and int (int)
int main(void)
{
    double miles, kms;

    // Get the distance in miles
    printf("Enter the distance in miles> ");
    scanf("%lf", &miles);

    // Convert the distance to km
    kms = KMS_PER_MILE * miles;

    // Display distance in km
    printf("That equals %f kilometers\n", kms);

    return (0);
}
