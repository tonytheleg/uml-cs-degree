/*
Write a function draw_parallel that draws parallel lines and a function draw_rectangle that uses draw_parallel and draw_base to draw a rectangle.
*/

#include <stdio.h>

void draw_parallel()
{
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
    printf("|         |\n");
}

void draw_base()
{
    printf(" --------- \n");
}

void draw_rectangle()
{
    draw_base();
    draw_parallel();
    draw_base();
}

int main(void)
{
    draw_rectangle();

    return (0);
}