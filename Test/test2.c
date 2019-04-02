#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int even(int number);

int main()
{
    int array[255] = {0};
    int i = 0;
    int loop = 1;
    int x = 0;
    int ret = 0;
    while (loop == 1)
    {
        printf("Enter a number\n>");
        scanf("%i",&array[i]);
        i++;
        printf("1)Input another number\n2)Done inputting numbers\n>");
        scanf("%i",&loop);
    }
    i--;
    for(x; x<=i;x++)
    {
        ret = even(array[x]);
        if (ret == 1)
        {
            printf("%i is even!!\n",array[x]);
        }
        else
        {
            printf("%i is odd!!\n",array[x]);
        }
        
    }
}

int even(int number)
{
    if((number % 2) == 0)
    {
        return (1);
    }
    else
    {
        return(0);
    }
    
}