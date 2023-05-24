
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);

    switch(year%400==0 ||year%4==0 && year%100!=0)
    {
    case 1:
        printf("%d is a Leap Year.", year);
        break;
    case 0:
        printf("%d is not a Leap Year.", year);
        break;
    }
    return 0;
}
