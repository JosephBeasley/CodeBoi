#include <math.h>
#include <stdio.h>
/* 
Name: Joseph Beasley
Date: 05feb2019
Project: Lab 5a
*/

int main()
{
    // initialization
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    // getting user input
    fprintf(stdout, "enter the length of the two sides divided by a + \n");
    fscanf(stdin, "%lf+%lf", &a, &b);
    // input validation
    if ((a > 0) && (b > 0))
    {
        c = ((a * a) + (b * b));
        fprintf(stdout, "the hypotenuse is %lf \n", ( sqrt(c)));
    }
    // kickout if not valid
    return(0);
}