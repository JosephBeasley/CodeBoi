#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 08feb2019
Project: Lab 7.4a
*/

int main()
{
    //initialize variable
    unsigned int num = 0;
    do //do at least once
    {
        //initialize local variable
        int a = 0;
        printf("please enter a number between 1-999\n");
        scanf("%u", &num); //assign user input to variable
        if (num > 999) //error check for numbers greater than 999
        {
            break; //end loop
        }
        for(int i=1; i<=999;i++) //print values using a for loop
        {
            if((num%i)==0 && a <20)
            {
                printf("%i, ",i);
                a++;
            }
            else if(a>=20)
            {
                break;
            }
        }
        printf("\n");
    }
    while(num<999); //maintain loop
    return(0);
}