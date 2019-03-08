#include <stdio.h>

/*
Name: Joseph Beasley
Date: 11FEB2019
Project: lab7.5a
*/

int main()
{
    //initialize variable
    int choice = 0;
    printf("Enter 1 for evens or 0 for odds \n");
    scanf("%i", &choice); //assign user input to variable
    if(choice == 1) //use if to decide choice
    {
        //print even numbers between 1 and 100
        for(int i=1; i<101; i++)
        {
            if ((i%2)==0)
            {
                printf("%i, ", i);
            }
        }

    }
    else if(choice == 0)
    {
        //print odd numbers between 1-100
        for(int i=1; i<101; i++)
        {
            if ((i%2)!=0)
            {
                printf("%i, ",i);
            }
        }
    }
    else
    {
        printf("ERROR incorrect input\n");
    }
    return (0);
}