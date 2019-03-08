#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 29Jan2019
Project: Lab 2B
*/
int main(void)
{
    //initialize variables
    int integer = 103;
    float moreinteger = 10.1;
    double evenmore = 10.12;
    char character = 't';

    //print variables
    printf("Your int %d cast as a float is %f \n", integer, (float) integer);
    printf("your int %d cast as a char is %c \n", integer, (char) integer);
    printf("your float %f cast as a double is %lf \n", moreinteger, (double) moreinteger);
    printf("Your double %lf cast as a float %f \n", evenmore, (float) evenmore);
    printf("Your Char %c cast as an integer is %d \n", character, (int) character);
    printf("The number 33 cast as a character is %c", (char) 33);

    return(0);
}

