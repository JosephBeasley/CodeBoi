#include <stdio.h>
/*
Name: Joseph Beasley
Date: 12FEB2019
Project: Calculator */

//prototype functions
int add(float one, float two);

int subtract(float one, float two);

int divide(float one, float two);

int multiply(float one, float two);

int main()
{
    //initialize variable
    int loop = 1;
    while  (loop == 1) //set it always repeating until user states otherwise
    {
        //initialize local varaibles
        float one = 0;
        float two = 0;
        char action = ' ';
        printf("\nPlease enter the math you would like to calculate (i.e /,*,+,-)\n");
        scanf("%f%c%f",&one, &action, &two); //assign user input to variables
        //make sure variables are numbers
        if (one > 0 && one < 65565)
        {
        
        }
        else
        {
            break;
        }
        if (two > 0 && two < 65565)
        {
    
        }
        else
        {
            break;
        }
        //use if statements and operator to decide
        if(action == '+')
        {
            add(one, two);
        }
        else if(action == '-')
        {
            subtract(one, two);
        }
        else if(action == '/')
        {
            divide(one, two);
        }
        else if(action == '*')
        {
            multiply(one, two);
        }
        else
        {
            //error check
            printf("ERROR INCORECT OPERATOR\n");
        }
        //ask if they would like to try again. if so, don't break the loop.
        printf("Would you like to try again? \n 1 for yes, 0 for no.\n");
        scanf("%i",&loop);
    }
    return(0);
}
//all functions defined
int add(float one,float two)
{
    printf("%.0f + %.0f = %.0f\n\n", one, two, one+two);
    return(0);
}

int subtract(float one, float two)
{
    printf("%.0f - %.0f = %.0f\n\n", one, two, one - two);
    return (0);
}

int divide(float one, float two)
{
    printf("%f / %f = %f\n\n", one, two, (one / two));
    return(0);
}

int multiply(float one, float two)
{
    printf("%f * %f = %f\n\n", one, two, one*two);
    return(0);
}