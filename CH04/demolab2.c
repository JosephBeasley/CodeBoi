#include <stdio.h>
int main(void)
{

    FILE *fp; //initialize pointers
    fp = fopen("/home/student/Desktop/Class/Demo Labs/CH04/file.txt", "a");
    int userInput = 0;                // Will store input
    printf("Enter a character: ");    // Prompts user
    userInput = getc(stdin);          // Stores stream input
    putc(userInput, fp);          // Writes to stdout
    printf("\n");
    fclose(fp);
    return(0);
}