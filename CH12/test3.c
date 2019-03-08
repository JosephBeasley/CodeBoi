#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fp1, *fp2;
   char line [100];
   fp1 = fopen("take.txt", "r");
   fp2 = fopen("put.txt","w");
   while (1)
   {
       fgets(line,100,fp1);
       if (!feof(fp1))
       {
           break;
       }
       fputs(line,fp2);
   }
   fclose(fp1);
   fclose(fp2);
   return(0);
}