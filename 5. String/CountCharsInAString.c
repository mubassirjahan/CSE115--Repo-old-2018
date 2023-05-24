#include <stdio.h>

int length(char arr[]);
int main()
{
    char str[100];
    gets(str);

    printf("\nString length: %d",length(str));
    return 0;
}

int length(char arr[])
{
    int i,count=0;
    for(i=0; arr[i]!='\0';i++)
        count++;
        return count;
}
