#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 04feb2019
Project: Lab 4a
*/
int main(void)
{
    //initialize variable
    char input = 0;
    printf("Please enter a character \n"); //get user input
    input = getchar(); //assign input to variables
    printf("you entered: ");
    putchar(input + 1); //showing value to screen
    printf("\n");
    return(0);
}
