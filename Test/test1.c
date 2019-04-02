 #include <stdio.h>
 #include <strings.h>
 #include <stdlib.h>
 
int main()
{
    int num;
    int rev = 0;
    printf("Please enter the number to be reverse\n>");
    scanf("%i",&num);
    while (num>0)
    {
        rev=(rev*10)+(num%10);
        num/=10;
    }
    printf("%i",rev);
    return(0);
}