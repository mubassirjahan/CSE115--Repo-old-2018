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

    int max= arr[0];

    for(i=0;i<5;i++)
    {
       if(max<arr[i])
        max=arr[i];
    }
    printf("Max is: %d",max);

    return 0;
}

