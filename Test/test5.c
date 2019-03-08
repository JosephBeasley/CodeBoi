#include <stdio.h>
#include <strings.h>


int main()
{
    int i, n, temp, j, arr[10];
    printf("\nEnter the number of elements in the array");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe array sorted in ascending order is: \n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return(0);
}