/* 
If the variables a , b , and c are 504 , 302.558 , and −12.31 , respectively, write a statement that will display the following line. (For clarity, a ❚ denotes a blank space.)
❚❚ 504 ❚❚❚❚❚ 302.56 ❚❚❚❚ -12.3
*/

#include <stdio.h>

int main(void)
{


    printf("%5d%11.2lf%9.1lf\n", 504, 302.56, -12.3);

    return (0);
}