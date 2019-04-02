#include <stdio.h>
#include <string.h>

int letter(char *string);

int main()
{
    char *sentences[3] = {"this b sentence b will b have b 5 b's","this will have 0","barely any in this one"};
    for (int i=0;i<3;i++)
    {
        int occurances = 0;
        occurances = letter(sentences[i]);
        printf("%s\n",sentences[i]);
        printf("there are %i occurances of the letter b in this sentence\n\n",occurances);
    }
}

int letter(char *string)
{
    char b = 'b';
    if (strchr(string,b)==NULL)
    {
        printf("no letters in this string!\n");
        return(0);
    }
    else
    {
        char *string2 = strchr(string,b);
        return (1 + letter(string2+1));
    }
    
}