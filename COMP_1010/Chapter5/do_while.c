#include <stdio.h>

char letter_choice;

int main(void)
{
    do {
        printf("Enter a letter from A through E> ");
        scanf("%c", &letter_choice);
    } while (letter_choice < 'A' || letter_choice > 'E');
}