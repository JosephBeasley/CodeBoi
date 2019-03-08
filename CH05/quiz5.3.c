#include <math.h>
#include <stdio.h>

int main()
{
    //initialize varaibles
    int x = 2;
    int y = 6;
    //////// WRITE EACH RESULT ////////
    //print variables inclluded in math functions
    printf("y < x = %i\n", y < x);
    printf("y <= x = %i \n", y <= x);
    printf("y > x = %i \n", y > x);
    printf("y >= x = %i \n", y >= x);
    printf("y == x = %i \n", y == x);
    printf("y != x = %i \n", y != x);
    printf("2 == y = %i \n", 2 == y);
    printf("6 != x = %i \n", 6 != x);
    printf("6 >= 2 = %i \n", 6 >= 2);
    printf("2 < 6 = %i \n", 2 < 6);
    printf("x != y != 3 >= x = %i \n", (((x != y) !=3) >= 3));           // Bonus
    return(0);
}