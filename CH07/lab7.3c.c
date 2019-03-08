#include <stdio.h>
#include <ctype.h>
/* 
Name: Joseph Beasley
Date: 08feb2019
Project: Lab 7.3c
*/

int main()
{
    //initialize array and variables
    int boi[26] = {0};
    char a = '0';
    int counter = 0;
    printf("enter your string. Enter a new line character when finished \n"); //request user input


    do //perform the action at least once.
    {
        a = getc(stdin);
        if((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
        {
            a = toupper(a);
            boi[counter] = a;
            counter++;
        }
    }
    //loop until value is met
    while (a != '\n' && counter < 25);
    //print value in the array using a for loop
    for(int i = 0; i < counter; i++)
    {
        printf("%c",boi[i]);
    }
    return (0);
}
