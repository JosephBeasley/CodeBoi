#include <stdio.h>
#include <strings.h>

int main()
{
    float temp = 0;
    float total = 0;
    float counter = 0;
    while (counter <=10)
    {
        printf("input a grade:");
        scanf("%f",&temp);
        total = total + temp;
        counter++;
    }
    printf("%.2f\n",(total/10));
}