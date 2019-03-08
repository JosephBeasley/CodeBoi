#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 04feb2019
Project: Lab 4d1
*/
int main()
{
    //initialize variables
    char first[15] = {0};
    char middle[15] = {0};
    char last[15] = {0};
    // get user input and assign to variables
    printf("Enter your first name \n");
    fscanf(stdin, "%14s", first);
    printf("Enter your middle name \n");
    fscanf(stdin, "%14s", middle);
    printf("Enter your last name \n");
    fscanf(stdin, "%14s", last);
    //print variables
    fprintf(stdout, "---------------------------------\nYour Name is: \t\n%.14s\t\n%.14s \t\n%.14s \t\n", first, middle, last);
    return(0);
}