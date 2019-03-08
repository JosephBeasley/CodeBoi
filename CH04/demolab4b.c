#include <stdio.h>

int main(void)
{
    //initialize variables
    int day[3] = {0};
    char month[10] = {0};
    int year[5] = {0};
    //assign user input to variables
    printf("enter the day \n ");
    scanf("%2i", day);
    printf("Enter the month \n");
    scanf("%9c", month);
    printf("Enter the year \n");
    scanf("%4i", year);
    // print variables
    printf(" %.2s %.10s %.4s", day, month, year);
    return(0);
}