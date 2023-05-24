#include<stdio.h>

void isFound(int arr[],int k,int l);

int main()
{
    int n,i,key;

    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];

    printf("Array Elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Search key:");
    scanf("%d",&key);
    isFound(arr,key,n);

    return 0;
}

void isFound(int arr[],int k,int l)
{
    int i;
    for(i=0; i<l; i++)
    {
        if (k==arr[i])
        {
            printf("Found at index %d",i);
            return 0;
        }
    }
    printf("Not found");

}
