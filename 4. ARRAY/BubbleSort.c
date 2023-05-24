///Problem 4
#include <stdio.h>

int main()
{
    int size,i,j,temp;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    ///Input:
    printf("Enter array elements:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    ///Bubblesort
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])        /// Swap
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    printf("Sorted array is: ");
    for(i=0;i<size;i++)
    {
        printf(" %d",arr[i]);
    }
}
