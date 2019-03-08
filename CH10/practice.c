/*
* name: Whelpley
* date: 20 Feb 2019
* project: Lab10.6A - PREPROCESSOR DIRECTIVES
* 
* Write a C program with preprocessor directives to:
*     Combine two string literals
*     Wrap those string literals in quotes
*     Define a constant buffer size of 64
* 
* Define an array:
*     Of standard buffer size
*     Assign the wrapped string literals to the array
* 
* Print the array
* 
*/


#define firstStrLit "Hey there"
#define secondStrLit ", Bruvs!"
#define combineStr firstStrLit secondStrLit
#define constBuff 64

#include <stdio.h>


int main() {
    const char heyArray[constBuff] = { combineStr };

    fprintf(stdout, heyArray);
    return 0;
}