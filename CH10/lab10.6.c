/*
Name: Joseph Beasley
Date: 20FEB2019
Project: Lab10.6
*/

#include <stdio.h>
#define one "Hello there. "
#define two "General Kenobi!"
#define COMBINE one two
#define buff 64

int main()
{
    char mayday[buff]={COMBINE};
    printf("%s", mayday);
    return(0);
}