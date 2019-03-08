/*
Name: Joseph Beasley
Date: 25FEB2019
Project: your song
*/
#include <stdio.h>

int main()
{
    FILE *pFile;
    char input;
    
    pFile = fopen("/home/student/Desktop/Class/song.txt","r");

    if (pFile != NULL)
    {
        //process files
        while (input != EOF)
        {
            input = fgetc(pFile);
            printf("%c", input);
        }
        //fclose(pFile);
    }
    else
    {
        printf("IO ERROR: Problem With File. \n");
    }
    fclose(pFile);
}