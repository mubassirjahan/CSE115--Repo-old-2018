#include<stdio.h>

int main()
{
    int arr[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Enter element of index %d\n",i);
        scanf("%d",&arr[i]);
    }


    printf("Reverse Array:\n");

    for(i=4; i>=0; i--)
    {
        printf(" %d",arr[i]);

    }

    return 0;
}

