// MyStringHeader.c
#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int print_the_count(char * inputString, int strLen)
{
    char tempChar = 0;      // Current char being acted on
    int table[26] = {0};    // Alpha
    int count = 0;

    if (!inputString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    for (int i = 0; i < strLen; i++)
    {
        if (inputString[i] >= 65 && inputString[i] <= 122)
        {
            tempChar = inputString[i];
            tempChar = toupper(tempChar);
            table[tempChar - 65] += 1;
            count++;
        }
    }

    // Print the table
    for (int i = 0; i < sizeof(table)/sizeof(table[0]); i++)
    {
        printf("%c: %d\n", i + 65, table[i]);
    }
    return count;
}

int reverse_it(char * forwardString, int strLen)
{
    char tempChar = 0;      // Current char being acted on
    int table[126] = {};    // Alpha
    int count = 0;

    if (!forwardString)
    {
        return ERR_NULL_POINTER;
    }
    else if (!strLen)
    {
        return ERR_INVALID_LENGTH;
    }

    for (int i = strLen; i <= strLen && i >= 0; i--)
    {
        int num = 0;
        //if (forwardString[i] >= 65 && forwardString[i] <= 122)
        //{
        tempChar = forwardString[i];
        table[num] = tempChar;
        count++;
        num++;
        printf("%c",tempChar);
        //}
    }
    
    /*for (int i=0; i<= strLen; i++)
    {
        // Print the table
        printf("%c",table[i]);
    }*/
    return(count);
}


// extern reverse_it(char * forwardString, int strLen);