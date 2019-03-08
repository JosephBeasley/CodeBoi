#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 30Jan2019
Project: Lab 3b
*/
int main(void)
{
    //initialize character array
    char stringyboi [256] = {0};
    //set values to array indexes
    stringyboi [0] = 'L';
    stringyboi [1] = 'E';
    stringyboi [2] = 'T';
    stringyboi [3] = 'S';
    stringyboi [4] = '\n';
    stringyboi [5] = 'A';
    stringyboi [6] = 'L';
    stringyboi [7] = 'L';
    stringyboi [8] = '\n';
    stringyboi [9] = 'Q';
    stringyboi [10] = 'U';
    stringyboi [11] = 'I';
    stringyboi [12] = 'T';
    stringyboi [255] = 0;
    //print array
    printf("%s \n", stringyboi);
    return(0);
}
