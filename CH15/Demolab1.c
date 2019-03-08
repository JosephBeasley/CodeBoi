#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _DEBUG
#define NDEBUG
#endif
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


//#define STEP1

#define BUF_SIZE 16

int main(void)
{
	char * inputString = (char *)calloc(BUF_SIZE, sizeof(char));
	assert(inputString);			// Assert that inputString is not NULL

#ifdef STEP1
	// Do step1 stuff here
	fgets(inputString, BUF_SIZE, stdin);
#else
	// Do other non-step1 stuff here
	scanf("%s", inputString);
#endif

	assert(inputString[BUF_SIZE - 1] == '\0');
	puts(inputString);

	return 0;
}