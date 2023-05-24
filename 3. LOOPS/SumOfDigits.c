#include <stdio.h>

int main()
{
    int num;
    int count = 0, i, sum=0;
    printf("Enter any integer number:");
    scanf("%d", &num);

    int origNum = num;

    while(num!=0)
    {
        count++;
        num/=10;
    }

    printf("%d\n",count);

        int temp;
    for(i=0; i<count; i++ )s
    {
        temp = origNum%10;
        sum=sum+temp;
        origNum/=10;
    }

     printf("%d",sum);

    return 0;
}
