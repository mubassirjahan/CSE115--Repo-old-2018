
#include <stdio.h>

int main()

{
    int a,b,c, condition;

    printf("Enter three sides of a triangle:\n");
    scanf("%d%d%d", &a, &b, &c);

    condition = (a+b>c && b+c>a && c+a>b);

    switch(condition)
    {
       case 1:
           printf("Triangle is Valid.");
           break;
       case 0:
        printf("Triangle is Invalid");
        break;
    }


    return 0;
    }
