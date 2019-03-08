#include <stdio.h>

int main()
{
    FILE *pFile;
    char input[81];
    
    pFile = fopen("/home/student/Desktop/Class/tester.txt","r");

    if (pFile != NULL)
    {
        //process files
        while (!feof(pFile))
        {
            fgets(input, 81, pFile);
            printf("%s", input);
        }
        //fclose(pFile);
    }
    else
    {
        printf("IO ERROR: Problem With File. \n");
    }
    fclose(pFile);
}