// p= (type *)malloc(size)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3,temp;
    printf("enter 3 numbers, each separated by a space:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1 > num2)
    {
        temp = num1;
    }
    else if (num2 > num1)
    {
        temp = num2;
    }
    if (num3 > temp)
    {
        temp = num3;
    }
    printf("\n%i\n",temp);
    return(0);
}