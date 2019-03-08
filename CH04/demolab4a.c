#include <stdio.h>

int main(void)
{
	//initialize variables
	char testCase[] = {'A', 'B', 'C', 0};
	double currentTemp[] = {100.1234, 99.876543, 133.7};
	int numOfRuns[] = {3, 4, 5};
	
	//print variables with varying size printing
	printf("%-12Test Case %-12Temp(F) %12-# of Runs\n");
	printf("%-12c %-012.2f %-12d\n", testCase[0], currentTemp[0], numOfRuns[0]);
	printf("%-12c %-012.2f %-12d\n", testCase[1], currentTemp[1], numOfRuns[1]);
	printf("%-12c %-012.2f %-12d\n", testCase[2], currentTemp[2], numOfRuns[2]);




    char inputBuffer[256] = {0}; //initialize char array
	printf("Enter a string but don't use any capital letters. \n");
	scanf("%255[^A-Za-y\n]s", inputBuffer); //assign user input to char array
	printf("Your lower case string was: \n%s", inputBuffer); //print array
	return 0;
}