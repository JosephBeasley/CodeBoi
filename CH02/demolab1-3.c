#include <stdio.h>

int main(void)
{
	//initialize variables
	int integer = 42;
	float singlePrecision = 2.2;
	double doublePrecision = 3.3;
	char singleChar = 'J';
	
	//print variables
	printf("Your int: %d cast to a float: %f \n", integer, (float) integer);
	printf("Your int: %d cast to a char: %c \n", integer, (char) integer);
	printf("Your float: %f cast to a double: %lf \n", singlePrecision, (double) singlePrecision);
	printf("Your double: %lf cast to a float: %f \n", doublePrecision, (float) doublePrecision);
	printf("Your char: %c cast to an int: %d \n", singleChar, (int) singleChar);
	printf("63 cast to a char: %c \n", (char) 63);

	return 0;
}