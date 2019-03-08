#include <stdio.h>
int main(void)
{
    //initialize varaible
    int userInput = 0;                // Will store user input
    printf("Enter a character: ");    // Prompts user
    userInput = getchar();            // Stores user input
    printf("Your character was: ");   // Prefaces output
    putchar(userInput);               // Prints output
    printf("\n");
    return (0);
}