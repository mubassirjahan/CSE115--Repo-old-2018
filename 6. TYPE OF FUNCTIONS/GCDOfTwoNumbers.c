#include <stdio.h>

int findGCD(int x, int y)
{
    int temp,i;
    if(x<y)
        temp=x;
    else temp=y;

    while(temp!=0)
    {
        if(x%temp==0 && y%temp==0)
            return temp;
            temp--;
    }

}
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);

    printf("\nGCD is %d",findGCD(a,b));
    return 0;
}
