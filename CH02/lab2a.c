#include <stdio.h>
/*
Name: Joseph Beasley
Date: 29Jan2019
Project: Lab 2A
*/
int main(void)
{
    //initialize variables
    int one = 1;
    float two = 1.1;
    double three = 2.2;
    char four = '!';

    //print variables
    printf("Your number is %d \n", one);
    printf("Its size is %d \n", sizeof(one));
    printf("Your Float is %f \n", two);
    printf("Its size is %d \n", sizeof(two));
    printf("Your double float is %lf \n", three);
    printf("Its size is %d \n", sizeof(three));
    printf("Your character is %c \n", four);
    printf("Its size is %d \n", sizeof(four));

    return(0);
}