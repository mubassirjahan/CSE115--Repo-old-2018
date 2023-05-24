//Calc using func and pointers

#include <stdio.h>

void sumf(float *x, float *y, float *sum)
{
    printf("%f %f:", *x,*y);
    *sum = *x+*y;
}
void subf(float *x, float *y, float *sub)
{
    *sub= *x-*y;
}
void mulf(float *x, float *y, float *mul)
{
    *mul = *x**y;
}
void divf(float *x, float *y, float *div)
{
    *div = *x/(*y);
}

int main()
{
    float a, b, sum, sub, mul, div;
    char op;

    printf("Enter the operands: ");
    scanf("%f%f",&a,&b);
    do{
    printf("Enter operator: \n");
    scanf(" %c",&op);
    }while(!(op=='+' || op=='-'||op=='*'||op=='/'));

    switch(op)
    {
        case '+':
            sumf(&a,&b, &sum);
            printf("Result is: %f", sum);
            printf("Inside + is: ");
            break;
        case '-':
            subf(&a,&b, &sub);
            printf("Result is: %f", sub);
            break;
        case '*':
            mulf(&a,&b, &mul);
            printf("Result is: %f", mul);
            break;
        case '/':
            if(b==0)
            {
                printf("Error: Divisor is 0.");
                return 0;
            }
            divf(&a,&b, &div);
            printf("Result is: %f", div);
            break;
    }

    return 0;
}
