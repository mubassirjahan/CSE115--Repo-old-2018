

#include <stdio.h>

int main()

{
    int a,b,c, isValid;

    printf("Enter three angles of a triangle in Degree:\n");
    scanf("%d%d%d", &a, &b, &c);

    isValid = (a+b+c==180 && a!=0 && b!=0 && c!=0);

    switch(isValid)
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
