
//This is a Rock Paper Scissors game

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int userChoice=1, comChoice;
    int retry;                                              //Boolean for replaying condition
    char replayChoice;

    printf("\nThis is a ROCK PAPER SCISSORS game");

    do{                                                        //For Replaying.

    do  {                                                       //Get user choice
        if(userChoice!=1 && userChoice!=2 && userChoice!=3)
        printf("You didn't select 1 2 or 3.\n");


        printf("\nSelect your choice:\n\n1: Rock\n2: Paper\n3: Scissors\n");
        scanf("%d",&userChoice);
        } while( userChoice!=1 && userChoice!=2 && userChoice!=3 );

    switch(userChoice)
    {
    case 1:
        printf("You selected Rock\n");
        break;
    case 2:
        printf("You selected Paper\n");
        break;
    case 3:
        printf("You selected Scissors\n");
        break;
    }


    comChoice = rand()%3+1;
    //printf("\n%d\n",comChoice);

     switch(comChoice)
    {
    case 1:
        printf("Computer selected Rock\n");
        break;
    case 2:
        printf("Computer selected Paper\n");
        break;
    case 3:
        printf("Computer selected Scissors\n");
        break;
    }

    if (userChoice==comChoice)
        printf("It's a draw");
    else if ((userChoice==1 && comChoice == 3) || (userChoice==2 && comChoice == 1) || (userChoice==1 && comChoice == 2) )
        printf("\n\n\nCongratulations, YOU WIN!!!\n");
    else
            printf("\n\n\nOps! Computer Wins.\n");



    printf("\nWant to replay?\nY or N?");
    scanf(" %c", &replayChoice);

    if (replayChoice=='y' || replayChoice=='Y')
        retry=1;
    else
        retry=0;
    }while(retry);




    return 0;
}

