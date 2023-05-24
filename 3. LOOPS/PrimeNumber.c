//All prime numbers from 1 to 100


#include <stdio.h>

int main()
{
    int num, j, isPrime=1;

    for(num=2; num<=100; num++)
    {
        for(j=2; j<num/2; j++)
        {
            if (num%j==0)
            {
                //printf("%d is not a Prime number.",i);
            isPrime = 0;
               break;

            }
        }

        if(isPrime)
            printf("%2d is a Prime number. \n",num);
        else 
            printf("%2d is not a Prime number. \n",num);

    }
    return 0;
}

