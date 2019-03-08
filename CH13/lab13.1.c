/*
Name: Joseph Beasley
Date: 26Feb2019
Project: Lab13.1
*/
/*
PERFORMANCE LAB 1
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

//TODO: Include needed headers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    //TODO: Create a string containing your first name
    
    char myname[21] = "Joseph Aaron Beasley";

    //TODO: Get the size of this string
    
    int longboi = (sizeof(myname));

    //TODO: Declare a char pointer *str
    
    char *str;

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    
    str = (char*)malloc(40);

    //TODO: Copy your name into the allocated space using strcpy()
    
    strcpy(str, myname);

    //TODO: Print out your name that is stored in the allocated memory space
    
    printf("the memory is saved as:  %s\n",str);

    //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    
    str = realloc(str,longboi);
    
    //TODO: Print out the string again
    
    printf("the memory is now saved as:  %s\n", str);
    
    free(str);
    
    return(0);
}