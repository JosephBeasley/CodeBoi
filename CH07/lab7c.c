#include <stdio.h>
#include <math.h>

int main()
{
    //initialize variables
    int one = 0;
    int two = 0;
    int three = 0;
    printf("Please enter two numers separated by a + \n");
    scanf("%i+%i", &one, &two); //assign user input to variables
    if (one == two) //error check to the same value
    {
        printf("ERROR\n");
        return (0);
    }
    else if (one > two) //set three to the value of one if one is greater than two
    {
        three = one;
    }
    else //set the value of three to the value of two if two is greater than one
    {
        three = two;
    }
    if (one + two + three < 2) //if they all add up to less than two then exit function
    {
        return (0);
    }
    else //print the value of all variables added together
    {
        printf("%i\n",(one + two + three));
    }
    return(0);
}