
#include <stdio.h>

long Factorial(int x);

int main()
{
   int num;
   long result;
   scanf("%d", &num);

   result = Factorial(num);
   printf("The factorial of %d is %ld", num,result );
}

long Factorial(int x)
{
    int i;
    long fact=1;

    for(i=1; i<=x; i++)
    {
        fact = fact*i;
    }
    return (fact);
}
