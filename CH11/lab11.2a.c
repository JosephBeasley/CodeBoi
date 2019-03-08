/*
Name: Joseph Beasley
Date: 21FEB2019
Project: Lab11.2a
cube a variable using pass-by-value
*/
#include <stdio.h>
int cubebyvalue(int n);

int main(void)
{
    int number = 5;
    printf("the original value of number is %d",number);
    number = cubebyvalue(number);
    printf("\n The new value of number is %d\n",number);
}

int cubebyvalue(int n)
{
    return n * n * n;
}