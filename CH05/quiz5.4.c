#include <math.h>
#include <stdio.h>

int main()
{
    //initialize variables
    int x = 99;
    int y = 0;

    //////// WRITE EACH RESULT ////////
    //print variables doing relation functions
    printf("x && y = %i \n", x && y);
    printf("y || x = %i \n", y || x);
    printf("!y = %i \n", !y );
    printf("y && 0 = %i \n", y && 0);
    printf("x || 42 = %i \n", x || 42);
    printf("!x = %i \n", !x);
    printf("x && x = %i  \n", x && x); 
    printf("y || y = %i \n", y || y);
    printf("!1 = %i \n",  !1);
    printf("1 && 1 =%i \n", 1 && 1);
    printf("(0 && 1) || (2 && 3) = %i \n", ((0 && 0) || (2 && 3)));        // Bonus
    return (0);
}