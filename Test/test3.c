#include <stdio.h>
#include <ctype.h>

void b(char *sentence);

int main()
{
	char *sentences[3] = {"This is incorrect","but maybe this is correct","by gosh so is this one"};
	for (int i=0;i<=2;i++)
	{
		b(sentences[i]);
	}
}

void b(char *sentence)
{
	if (*sentence == 'b')
	{
		printf("%s\n",sentence);
	}
}