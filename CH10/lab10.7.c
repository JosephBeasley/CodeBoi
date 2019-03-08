/*
Name: Joseph Beasley
Date: 20FEB2019
Project: Lab10.7
*/

#include <stdio.h>
#undef EOF
#define EOF 66
#define _INC_STDIO 20

int main()
{
    #ifdef _INC_STDIO
        printf("the value of _INC_STDIO is :  %d \n", _INC_STDIO);
    #else
        printf("_INC_STDIO is not set!\n");
    #endif
    #if EOF == 66
        printf("EOF is correct!\n");
    #endif
    #if (FOPEN_MAX < 201)
        printf("FOPEN_MAX is set to the correct range\n");
    #endif
    #if FILENAME_MAX > 12
        printf("FILENAME_MAX is too large, please change value and try again\n");
    #endif
    return(0);
}