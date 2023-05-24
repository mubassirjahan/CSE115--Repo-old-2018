//swap with pointers

#include <stdio.h>

void swap(int *x, int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    swap(&a,&b);

    printf("Swapped numbers: %d, %d ", a, b);
    return 0;
}
