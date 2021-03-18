/*
Write C statements to carry out the following steps.
    a. If item is nonzero, then multiply product by item and save the result in product
    otherwise, skip the multiplication. 
In either case, print the value of product.
*/

#include <stdio.h>

int main(void)
{
    int number, product; 

    printf("Enter a integer: ");
    scanf("%d", &number);

    if (number != 0) {
        product = number * number;
    } else {
        product = number;
    }

    printf("Product is %d\n", product);

    return (0);
}