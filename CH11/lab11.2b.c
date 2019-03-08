/*
Name: Joseph Beasley
Date: 21FEB2019
Project: Lab11.2b
*/
#include <stdio.h>

void cubebyreference(int *nPtr);

int main(void)
{
    int number = 5;
    printf("The original value of number is %d", number);
    cubebyreference(&number);
    printf("\nThe new value of number is %d\n",number);
}

void cubebyreference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}