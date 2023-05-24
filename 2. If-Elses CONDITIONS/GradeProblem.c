

//Determine grade depending on input marks


#include<stdio.h>
int main()
{
    int mark;


    printf("Enter your subject mark:");
    scanf("%d",&mark);

    if( mark<=100 && mark>=80)
    {
        if (mark>95)
        {
            printf("\nYour Grade is A");
            printf("\nStudent gets a Distinction");
        }

    }
    else if( mark<=100 && mark>80)
    {
        printf("\nYour Grade is B");
    }
    else if( mark<=80 && mark>70)
    {
        printf("\nYour Grade is C");
    }
    else if( mark<=70 && mark>60)
    {
        printf("\nYour Grade is D");
    }
    else
        printf("\nYou FAILED");
    return 0;
}

