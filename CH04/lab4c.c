#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 04feb2019
Project: Lab 4c
*/
int main()
{
    //initialize variable
    char lines[10];                        
    printf("Enter a string: "); //ask for user input          
    fgets(lines, sizeof(lines), stdin);
    printf("Your string was: ");         
    fputs(lines, stdout); //print variable                 
    return(0);                            
}