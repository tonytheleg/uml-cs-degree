/*
Write a switch statement that assigns to the variable lumens the expected brightness of an incandescent light bulb whose wattage has been stored in watts. 
Use this table:
Watts   Brightness (in Lumens)
15      125
25      215
40      500
60      880
75      1000
100     1675
*/

#include <stdio.h>

int main(void)
{
    int watts = 40;
    int lumens;

    switch (watts) {
    case 15:
        lumens = 125;
        break;
    case 25:
        lumens = 215;
        break;    
    case 40:
        lumens = 500;
        break;    
    case 60:
        lumens = 880;
        break;    
    case 75:
        lumens = 1000;
        break;    
    case 100:
        lumens = 1675;
        break;
    default:
        lumens = -1;            
    }

    printf("A %d watt bulb provides %d lumens of brightness\n", watts, lumens);

    return (0);
}