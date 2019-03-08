#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 04feb2019
Project: Lab 4b
*/

int main()
{
    //initialize variable
    char input = 0;
    printf("Please enter a character \n"); //get user input
    input = getc(stdin); //set variable to input
    printf("you entered: ");
    putc(input - 1, stdout); //print variable to screen
    printf("\n");
    return(0);
}