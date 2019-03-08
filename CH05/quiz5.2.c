#include <stdio.h>
#include <math.h>

int main()
{
    //initialize variables
    int x = 7;
    int y = 4;
    float z = 0;
    //////// WRITE EACH RESULT ////////
    //print variables included in math functions
    printf("x * y = %d\n", x * y);
    printf("x / y = %f\n", x / (float)y );
    printf("x % y = %i\n", x / y);
    printf("y + x = %i\n", x + y);
    printf("y - x = %i\n", x - y);
    printf("-y = %i\n", -y);
    printf("++x = %i\n", ++x);
    printf("y++ = %i\n", y++);
    printf("x-- = %i\n", x--);
    printf("--y = %i\n", --y);
    printf("1 + 2 * (3 + y) + 5 = %i\n", (1 + 2 * (3 + y) + 5));
    return(0);
}