#include <stdio.h>
int main(void)
{
    char buff[4];                        // Will store string
    printf("Enter string: ");            // Prompts user
    fgets(buff, sizeof(buff), stdin);    // Stores user string
    printf("Your string was: ");         // Prefaces output
    puts(buff);  
    return(0);                            // Writes to stdout
}