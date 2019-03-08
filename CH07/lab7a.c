#include <math.h>
#include <stdio.h>

int main()
{
    //initialize char array
    char thingy[255] = {0};
    fprintf(stdout, "enter a string\n");
    fscanf(stdin,"%s", thingy); //assign user input to array
    
    if (thingy[0]>=32&&thingy[0]<126)//if the value is a letter then print it
    {
        fprintf(stdout, "%s\n", thingy);
    }
    else 
    {
        fprintf(stdout, "string is wack. try again.");//error check for no string
    }
    return(0);
}