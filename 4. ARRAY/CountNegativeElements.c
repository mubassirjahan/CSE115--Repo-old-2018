#include <stdio.h>

int main()
{
    int size, count=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    int i, arr[size];

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0; i<size; i++)
    {
        if(arr[i]<0)
            count++;
    }
    printf("Total number of negative elements are: %d",count);
    return 0;
}
