#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 04feb2019
Project: Lab 4d2
*/
int main()
{
    //initialize variables
    int one = 0;
    int two = 0;
    //get user input and set variable to input
    fprintf(stdout, "enter two numbers, separated by a *, to be multiplied.\n");
    fscanf(stdin, "%d*%d", &one, &two);
    //print variables
    fprintf(stdout, "%d multiplied by %d is %d \n", one, two, one * two);
    return(0);
}