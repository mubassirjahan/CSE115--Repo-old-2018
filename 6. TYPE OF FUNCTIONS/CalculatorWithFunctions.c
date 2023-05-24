#include<stdio.h>
float sum(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);

int main()
{
    float x,y;
    char op;

    printf("\nEnter the value of x=");
    scanf("%f",&x);
    printf("\nEnter the value of y=");
    scanf("%f",&y);


    do{
            printf("Enter Operator:");
            scanf(" %c",&op);

            switch(op)
            {
            case'+':
                printf("\nThe Addition of these two numbers is %f",sum(x,y));
                break;
            case'-':
                printf("\nThe substraction of these two numbers is %f",sub(x,y));
                break;
            case'*':
                 printf("\nThe multiplication of these numbers is %f",mul(x,y));
                 break;
            case'/':
                if (y==0)
                    printf("Division by 0, error");
                else
                    printf("\nThe division of these numbers is %f",div(x,y));
                 break;

            default:
                 printf("Operator not valid.\n");
            }
            printf("Truth : %d", op=='+' || op=='-' || op =='*' || op=='/' );
    }while(!(op=='+' || op=='-' || op =='*' || op=='/' ));

    return 0;
}

    float sum(float a,float b)
    {
        return (a+b);
    }
float sub(float a,float b)
    {
        return(a-b);
    }


    float mul(float a,float b)
    {
        return (a*b);
    }
  float div(float a,float b)
    {
            return(a/b);

    }
