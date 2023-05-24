///Problem 1

#include <stdio.h>

int main()
{
    int size,i,j,count=0;;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    ///Input:
    printf("Enter array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j] && j<i)           ///Makes sure it isn't present earlier
            {
                break;
            }
            if(arr[i]==arr[j] && i!=j)          ///Finds duplicates
            {
                count++;
            }
        }
    }

    printf("Duplicate elements: %d",count);
    return 0;
}

