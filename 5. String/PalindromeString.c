#include <stdio.h>

int main()
{
    char str[20];
    int i,count=0;
    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        count++;
    }

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!=str[count-1])
        {
            printf("Not a Palindrome");
            return 0;
            printf("\n\ni: %d count: %d\n\n", i, count);
        }

        count--;
    }
    printf("Palindrome string");

    return 0;
}
