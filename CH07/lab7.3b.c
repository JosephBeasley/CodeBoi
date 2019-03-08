#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 08feb2019
Project: Lab 7.3b
*/

int main()
{
    //initialize char array and other varaibles
    char string[255] = {"why\nhello\nthere\0"};
    int x = 0;
    char y = string[x];
    //use a while loop to print specific values in the array
    while((y != '\n') && (y != '\0'))
    {
        
        printf("%c",y);
        x++;
        y = string[x];
    }
    return (0);
}