#include <math.h> 
#include <stdio.h>

int main()
{
    //initialize varaibles
    int x = 9;
    int y = 3;
    //////// WRITE EACH VALUE OF X ////////
    //perform math functions with variables
    printf("x *= y = %i \n", x *= y);
    x = 9;
    y = 3;
    printf("x /= y = %i \n", x /= y);
    x = 9;
    y = 3;
    printf("x %= y = %i \n", x %= y);
    x = 9;
    y = 3;
    printf("x += y = %i \n", (x += y));
    x = 9;
    y = 3;
    printf("x -= y = %i \n", x -= y);
    x = 9;
    y = 3;
    printf("x *= ++y = %i \n", x *= ++y);
    x = 9;
    y = 3;
    printf("x /= y-- = %i \n", x /= y--);
    x = 9;
    y = 3;
    printf("x %= --x = %i \n", x %= --x);
    x = 9;
    y = 3;
    printf("x += --y = %i \n", x += --y);
    x = 9;
    y = 3;
    printf("x -= y++ = %i \n", x -= y++); 
    x = 9;
    y = 3;
    return (0);
}