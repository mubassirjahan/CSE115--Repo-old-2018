#include <stdio.h>
#include <math.h>

int main()

{
    int i, num, temp, sum = 0;

    scanf("%d",&num);

    printf("Factors of %d : ",num);

    for(i=1; i<=num; i++)
    {
       if(num%i==0)
        printf("%d, ",i);

    }


    return 0;
}

