#include <stdio.h>
#include <strings.h>


int main ()
{
    int num;
    char letter;
    printf("Please enter an ascii value(65-90 or 97-122)\n>");
    scanf("%i",&num);
    if ((num>64 && num <91) || (num>96 && num<123))
    {
        letter = num;
        printf("%i ASCII value is %c\n",num,letter);
    }
    else
    {
        printf("YOU ENTERED AN INCORRECT VALUE BUCKO\n");
    }
    return(0);
}