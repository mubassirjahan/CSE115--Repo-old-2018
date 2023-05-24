#include <stdio.h>

int main()
{
    int size;
    printf("Input size of the array: ");
    scanf("%d",&size);
    int arr[size], even[size], odd[size];
    int i;
    int countE=0, countO=0;
    printf("Input elements in array: ");
    for(i=0;i<size; i++)                ///Input in first array
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<size; i++)               ///Getting elements in Even and Odd array
    {
        if(arr[i]%2==0)
        {
            even[countE]=arr[i];
            countE++;
        }
        else
        {
            odd[countO]=arr[i];
            countO++;
        }
    }

    printf("Even elements in array: ");
    for(i=0; i<countE; i++)                 ///Output Even array
    {
        printf(" %d", even[i]);
    }

    printf("\nOdd elements in array: ");
    for(i=0; i<countO; i++)                    ///Output Odd array
    {
        printf(" %d", odd[i]);
    }


    return 0;
}
