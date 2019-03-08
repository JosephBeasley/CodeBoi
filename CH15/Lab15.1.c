/*
Name: Joseph Beasley
Date: 04MAR2019
project: Lab 15.1
*/

#include <stdio.h>
#include <strings.h>
#include <errno.h>

//Write (or modify) a program that implements the following:

//feof()
//perror()
//Return errno
int main () 
{
   FILE *fp;
   int c;
  
   fp = fopen("file.txt","r");
   if(fp == NULL) 
    {
        perror("Error in opening file");
        return(-1);
    }
   
   while(1) 
   {
        c = fgetc(fp);
        if( feof(fp) ) 
        { 
            break ;
        }
        printf("%c", c);
   }
   fclose(fp);
   
   return(0);
}
//strerror()
//Replicate some error to test your implimentation

//Read a non-existent file.
//Write to a locked file.
//Misuse a math function .