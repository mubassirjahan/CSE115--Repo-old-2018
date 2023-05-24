#include <stdio.h>

int main()

{
    int min, max, sum=0,i;

    printf("Minimum:");
    scanf("%d", &min);
    printf("Maximum:");
    scanf("%d", &max);

    if (min%2==0)
        min=min+1;
    if (max%2==0)
        max=max-1;

    printf("The sum is:");

    for (i=min; i<=max; i+=2)
    {
        sum=sum+i;

    }

    printf("%d", sum);

    return 0;
}


