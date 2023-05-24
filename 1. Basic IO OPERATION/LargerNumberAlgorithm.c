
//Finds larger number
//Without using if-else

#include <stdio.h>
#include <math.h>

int main (void)
{
    int a;
    int b;

    scanf("%d%d",&a, &b);

    int larger = ( (a+b)+ abs(a-b) )/2;

    printf("%d", larger);

    return 0;
}

