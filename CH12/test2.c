#include <stdio.h>

int main()
{
    FILE *pFile;
    int num;
    
    pFile = fopen("/home/student/Desktop/Class/tester.txt","r");
    num = fgetc(pFile);
    if (pFile != NULL)
    {
        //process files
        while (num != EOF)
        {
            putchar(num);
            num = fgetc(pFile);
        }
        //fclose(pFile);
    }
    else
    {
        printf("IO ERROR: Problem With File. \n");
    }
    fclose(pFile);
}