#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *string1;
    int *array_of_nums;
    int str_siz, num_nums, i;

    printf("Enter string length and string: ");
    scanf("%d", &str_siz);
    // calloc creates an array of elements in heap using 
    // size of char, and casts to a pointer to store in string1
    string1 = (char *)calloc(str_siz, sizeof(char));
    scanf("%s", string1);

    printf("\nHow many numbers?: ");
    scanf("%d", &num_nums);
    array_of_nums = (int *)calloc(num_nums, sizeof(int));
    array_of_nums[0] = 5;
    for (i = 1; i < num_nums; ++i)
        array_of_nums[i] = array_of_nums[i - 1] * i;
    
    return(0);
}