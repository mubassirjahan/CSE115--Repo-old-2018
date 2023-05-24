
#include <stdio.h>
#include <math.h>

int main()

{
    int i, data[10],sum=0;
    double mean, variance, stddev;

    //Taking input
    for(i=0;i<10;i++)
        scanf("%d",&data[i]);


    for(i=0;i<10;i++)
    {
        sum+=data[i];
    }
    mean=sum/10.0;

    sum=0;
    for(i=0;i<10;i++)
    {
        sum+=pow( data[i],2 );
    }
    variance=sum/10.0 - pow(mean,2);

    stddev=sqrt(variance);

    printf("Mean: %lf\nVariant: %lf\nStandard Deviant: %lf",mean,variance,stddev);

    return 0;
}
