#include <stdio.h>
/*
Name: Joseph Beasley
Date: 11FEB2019
Project: Lab8A
*/

//function prototype
int replace_character(char * string, const char findThisChar, const char replaceItWithThis);

int main()
{
    //initialize variables and arrays
    char choose = 'e';
    char replace = 'o';
    char boi[16] = {0};
    char *buff[] = {boi};
    //assign values to array index
    boi[0] = 'W';
    boi[1] = 'h';
    boi[2] = 'y';
    boi[3] = '\n';
    boi[4] = 'H';
    boi[5] = 'e';
    boi[6] = 'l';
    boi[7] = 'l';
    boi[8] = 'o';
    boi[9] = '\n';
    boi[10] = 'T';
    boi[11] = 'h';
    boi[12] = 'e';
    boi[13] = 'r';
    boi[14] = 'e';
    boi[15] = '\n';
    int grabbed = replace_character(*buff, choose, replace); //assign value function returns to an interger
    printf("%i characters replaced\n", grabbed); //print variable
    return(0);
}

//define function
int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
    int counter=0;
    for(int i=0;i<16;i++)//use for loop to check each index in array
    {
        if (string[i]== findThisChar)//use if statement to find a specific character to replace
        {
            string[i] = replaceItWithThis;
            counter++;
        }
    }
    return(counter);

}
