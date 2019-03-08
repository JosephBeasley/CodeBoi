/*
Name: Joseph Beasley
Date: 27FEB2019
Project: Linked List
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Create a linked list, the struct members should contain the following:
    //Each students initals
    //Each students favoriate musical artist
    //Each students dream car
    //Required data for linked list completion
    //May be worth each student just posting their data into a slack channel so everyone can grab off of it
struct student
{
    char initials[4];
    char artist [32];
    char car [32];
};
//Create a menu allowing for the following:
int main ()
{
    struct student matt = {"MAG", "Quinn", "Tesla"};
    struct student Ben = {"BTC", "Rezz", "Toyota Corolla"};
    struct student Tanner = {"TTM","Dua Lipa", "Toyota Camry"}; 
    struct student Mike = {"MHD","Lil Pump", "Chevy"};
    int loop = 1;
    while (loop ==1)
    {
        int choice = 0;
        printf("choose an option \n 1)all students and their data \n 2) all students and one choice of their data \n 3)select one student for their data \n 4)Exit \n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            //Print out of all students and all of their data
            printf("Matt:\n");
            printf("%s\n",matt.car);
            printf("%s\n",matt.artist);
            printf("%s\n",matt.initials);
            printf("Ben:\n");
            printf("%s\n",Ben.car);
            printf("%s\n",Ben.artist);
            printf("%s\n",Ben.initials);
            printf("Tanner:\n");
            printf("%s\n",Tanner.car);
            printf("%s\n",Tanner.artist);
            printf("%s\n",Tanner.initials);
            printf("Mike:\n");
            printf("%s\n",Mike.car);
            printf("%s\n",Mike.artist);
            printf("%s\n",Mike.initials);
        }
        else if (choice==2)
        {
            int choice2 = 0;
            //Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
            printf("Choose an option:\n 1)car\n 2)artist\n 3)initials\n");
            scanf("%i", &choice2);
            if (choice2 == 1)
            {
                printf("Matt:\n");
                printf("%s\n",matt.car);
                printf("Ben:\n");
                printf("%s\n",Ben.car);
                printf("Tanner:\n");
                printf("%s\n",Tanner.car);
                printf("Mike:\n");
                printf("%s\n",Mike.car);
            }
            else if (choice2 == 2)
            {
                printf("Matt:\n");
                printf("%s\n",matt.artist);
                printf("Ben:\n");
                printf("%s\n",Ben.artist);
                printf("Tanner:\n");
                printf("%s\n",Tanner.artist);
                printf("Mike:\n");
                printf("%s\n",Mike.artist);
            }
            else if (choice2 == 3)
            {
                printf("Matt:\n");
                printf("%s\n",matt.initials);
                printf("Ben:\n");
                printf("%s\n",Ben.initials);
                printf("Tanner:\n");
                printf("%s\n",Tanner.initials);
                printf("Mike:\n");
                printf("%s\n",Mike.initials);
            }
            else
            {
                printf("ERROR\n");
            }
        }
        else if (choice==3)
        {
            int choice3 = 0;
            //Print out of only a specific student (This one can be challanging)
            printf("Choose an option:\n1)Mat\n2)Ben\n3)Tanner\n4)Mike\n");
            scanf("%i", &choice3);
            if (choice3 == 1)
            {
                printf("Matt:\n");
                printf("%s\n",matt.car);
                printf("%s\n",matt.artist);
                printf("%s\n",matt.initials);

            }
            else if (choice3 == 2)
            {
                printf("Ben:\n");
                printf("%s\n",Ben.car);
                printf("%s\n",Ben.artist);
                printf("%s\n",Ben.initials);
            }
            else if (choice3 == 3)
            {
                printf("Tanner:\n");
                printf("%s\n",Tanner.car);
                printf("%s\n",Tanner.artist);
                printf("%s\n",Tanner.initials);

            }
            else if (choice3 == 4)
            {
                printf("Mike:\n");
                printf("%s\n",Mike.car);
                printf("%s\n",Mike.artist);
                printf("%s\n",Mike.initials);
            }
            else 
            {
                printf("ERROR\n");
            }

        }
        else if (choice == 4)
        {
            loop = 0;
        }
        else
        {
            printf("ERROR. INCORRECT INPUT\n");
        }
        
    }
    return (0);
}
    //BONUS
    //Add additonal students to the end
    //Remove students at the end
    //Remove a specific student (This one is challanging)
//Push code to Github and post the link in code (This is so that we can get more practice with git)
    //Ensure you are commiting often
    //Advice: Commit anything a moderate feature is added or changed
        //ex: You added the ability to print out a specific student
        //ex: You removed a section of code that was giving you issues
//Advice: You can commit often without the need to push your code. It's recommended to push code after larger work is done
    //ex: You finished an entire requirment
    //ex: You changed a large amount of code
    //ex: You have a ton of commits