#include <stdio.h>
#include <strings.h>

int main()
{
    int results[11];
    int pass = 0;
    int fail = 0;
    for (int i=0; i<10; i++)
    {
        printf("Enter score as 1 = pass and 2 = fail: ");
        scanf("%i",&results[i]);
    }
    int index = 0;
    while(results[index])
    {
        if (results[index] == 1)
        {
            pass++;
        }
        if (results[index] == 2)
        {
            fail++;
        }
        index++;
    }
    if (pass >=8)
    {
        printf("\nInstructor bonus!!\n");
    }
    printf("\n%i students have passed!!!!\n",pass);
    printf("\n%i students have failed!!!!\n\n",fail);
    return(0);
}