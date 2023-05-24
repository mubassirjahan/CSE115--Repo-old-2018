#include <stdio.h>

int main()
{
    int n, count=0;
    int evenCount=0, oddCount=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n], odd[n], even[n], i;

    printf("Enter elements in the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("Even elements in Array: ");
    for(i=0; i<evenCount; i++)
    {
        printf("%d ",even[i]);
    }

    printf("\nODD elements in Array: ");
    for(i=0; i<oddCount; i++)
    {
        printf("%d ",odd[i]);
    }

    return 0;
}

