#include <stdio.h>

int main()
{
    //initialize variables
    char choice = 0;
    int one = 0;
    int two = 0;
    printf("enter two numbers you would like to perform a math function separated by a math operator\n");
    scanf("%i%c%i", &one,&choice, &two);//assign user input to variables
    switch(choice) //use choice variable as a switch case
    {
        //each case for what choice could be
        //perform math functions based on the choice
        case '+':
            printf("%i+%i = %i\n", one, two, (one + two));
            break;
        case '-':
            printf("%i-%i = %i\n", one, two, (one - two));
            break;
        case '*':
            printf("%i*%i = %i\n", one, two, (one * two));
            break;
        case '/':
            printf("%i/%i = %i\n", one, two, (one / two));
            break;
        default:
            break;
    }
    return (0);
}