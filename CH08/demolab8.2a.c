#include <stdio.h>

int remove_newline(char * buffer);

int main()
{
    //initialze arrays
    char boi[16] = {0};
    char *buff[] = {boi};
    //assign values to array
    boi[0] = 'W';
    boi[1] = 'h';
    boi[2] = 'y';
    boi[3] = '\n';
    boi[4] = 'H';
    boi[5] = 'e';
    boi[6] = 'l';
    boi[7] = 'l';
    boi[8] = 'o';
    boi[9] = '\n';
    boi[10] = 'T';
    boi[11] = 'h';
    boi[12] = 'e';
    boi[13] = 'r';
    boi[14] = 'e';
    boi[15] = '\n';
    //assign value of function to an interger
    int counter1 = remove_newline(*buff);
    //print interger
    printf("%i\n",counter1);
    return(0);
}

int remove_newline(char * buffer)
{
    int counter=0;
    for(int i=0;i<16;i++) //use for loop to check array
    {
        if (buffer[i]=='\0')
        {
            //error check
            printf("ERR_NULL_POINTER");
            break;
        }
        else if(buffer[i]=='\n')
        {
            //remove new line
            buffer[i]=' ';
            counter++;
            
        }
    }
    return(counter);

}