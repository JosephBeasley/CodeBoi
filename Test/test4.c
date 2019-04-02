#include <stdio.h>
#include <string.h>

void ed(char *sentence);

int main()
{
    char *sentences[3] = {"this wont end in the right letters","but this one willed","and this one will end.... ed"};
    for (int i=0;i<=2;i++)
    {
        ed(sentences[i]);
    }
}

void ed(char *sentence)
{
    if (sentence[strlen(sentence)-2]== 'e'&&sentence[strlen(sentence)-1]=='d')
    {
        printf("%s\n",sentence);
    }
}