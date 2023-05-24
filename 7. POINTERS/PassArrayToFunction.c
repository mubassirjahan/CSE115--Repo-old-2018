#include<stdio.h>

void getAverage(int arr2[],int l);

int main()
{
    int arr[4]={1,2,3,4};
    getAverage( arr , 4 );
    return 0;
}

void getAverage(int arr2[],int l)
{
    int i,sum=0;
    float avg;
    for(i=0; i<l;i++)
    {
        sum+=arr2[i];
    }
    avg = (float)sum/l;
    printf("average is: %f",avg);
}
