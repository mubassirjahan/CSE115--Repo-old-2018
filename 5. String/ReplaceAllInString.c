
#include <stdio.h>

void replace(char arr[],char oldChar, char newChar);
int main()
{
    char str[100];
    char ch1, ch2;
    printf("Enter string: ");
    gets(str);
    printf("Old Char: ");
    scanf("%c",&ch1);
    printf("New Char: ");
    scanf(" %c",&ch2);

    replace(str, ch1, ch2);

    return 0;
}

void replace(char arr[],char oldChar, char newChar)
{
    int i;
    for(i=0; arr[i]!='\0';i++)
    {
        if(arr[i]==(int)oldChar)
            arr[i]=(int)newChar;
    }
    printf("Modified string: %s", arr);
}
