#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 08feb2019
Project: Lab 7.3a
*/

int main(void)
{
    //initialize arrays
    char quoteboi [] = {'W', 'H', 'Y', '\n', 'M', 'E', '\0'};
    int arrayboi [11] = {0};
    //set values to array
    arrayboi[0] = 21;
    arrayboi[1] = 13;
    arrayboi[2] = 14;
    arrayboi[3] = 22;
    arrayboi[4] = 15;
    arrayboi[5] = 11;
    arrayboi[6] = 11;
    arrayboi[7] = 14;
    arrayboi[8] = 12;
    arrayboi[9] = 25;
    arrayboi[10] = 20;
    //use a for loop to print every index of the array
    for (int i = 0; i < 11; i ++)
        {
            printf("The age of everyone in the class is %d \n", arrayboi[i]);
        }
    //use a for loop to print every index of the array
    for (int i = 0; i < 7; i ++)
        {
            printf("%c", quoteboi[i]);
        }
    printf("\n");
    
    return(0);
}