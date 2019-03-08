#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "When in the  political bands it encourages them to impede to the separation.";

    int index,alpha,blank,punct,up,low;

    alpha = blank = punct = up = low = 0;

/* gather data */
    index = 0;
    while(phrase[index])
    {
        if (islower(phrase[index]))
            low++;
        if (isupper(phrase[index]))
            up++;
        if(isalpha(phrase[index]))
            alpha++;
        if(isblank(phrase[index]))
            blank++;
        if(ispunct(phrase[index]))
            punct++;
        index++;
    }

/* print results */
    printf("\"%s\"\n",phrase);
    puts("Statistics:");
    printf("%d alphabetic characters\n",alpha);
    printf("%d blanks\n",blank);
    printf("%d punctuation symbols\n",punct);
    printf("%d uppercase letters\n",up);
    printf("%d lowercase letters\n",low);

    return(0);
}