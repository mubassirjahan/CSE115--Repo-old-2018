
#include <stdio.h>

int OddEven(int x);

int main()
{
   int num;
   scanf("%d", &num);

   if(OddEven(num))
       printf("%d is Odd", num);
   else
       printf("%d is Even",num);
   return 0;
}

int OddEven(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}

