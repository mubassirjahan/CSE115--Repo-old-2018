//All prime numbers from min to max range


#include <stdio.h>

void Prime(int i, int j);

int main()
{
    int min, max;
    printf("Enter the range for which you want to detect the Prime numbers:\n");
    printf("(First enter the minimum number then the Maximum number)\n");

    scanf("%d%d",&min, &max);

    Prime(min,max);

    return 0;
}

void Prime(int x, int y)
{
        int i, j, isPrime;                    //isPrime is a boolean variable here

    for(i=x; i<=y; i++)
    {
        if(i==1)
            continue;

        isPrime=1;                              // 1 indicates, true
        for(j=2; j<i; j++)
        {
            if (i%j==0)
            {
                isPrime = 0;
               break;

            }
        }

        if(isPrime == 1)
            printf("%2d is a Prime number. \n",i);


    }
}
