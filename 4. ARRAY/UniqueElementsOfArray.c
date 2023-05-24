#include <stdio.h>

int main()
{
    int n, isUnique, count=0;

    printf("How many elements? ");
    scanf("%d",&n);
    int arr[n],i,j,k=0;
    int unique[n];

    printf("Enter elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i=0;i<n;i++)
    {
        isUnique=1;

        for(j=0;j<n;j++)
        {
            if(j==i)
                continue;

            if(arr[i]==arr[j])
            {
                isUnique=0;
            }

        }

        if(isUnique){
            unique[k] = arr[i];
            k++;
        }
    }

    for(i=0; i<k;i++)
    {
        arr[i]=unique[i];
    }
    printf("Array now contains: ");
    for(i=0; i<k; i++)
        {
            printf(" %d", arr[i]);
        }
    return 0;
}
