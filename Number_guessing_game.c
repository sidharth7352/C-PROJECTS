// Number Guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers....\n");
    random = (rand()%100)+1; // Generating between 0 to 100

    do {
        printf("Please Enter your Guess between 1 to 100 :  ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess < random)
        {
            printf("Guess the larger number :  \n");    
        }
        else if(guess > random)
        {
            printf("Guess a smaller number : \n");
        }
        else
        {
            printf("\n\nCongratulations !!! You have succesfully guessed the number in %d attempts\n",no_of_guess);
        }

    }while(guess != random);
    printf("\nBye Bye....Thanks for Playing..\n");
    printf("\nDeveloped by : Sidharth K\nEmail ID: sidharthkofficial@gmail.com\nGithub:Sidharth7353\n");
}