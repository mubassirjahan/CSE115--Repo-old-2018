#include <stdio.h>

int compare(char arr1[], char arr2[]);
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    printf("%d",compare(str1,str2));

    return 0;
}

int compare(char arr1[],char arr2[])
{
   int i;
   int str1c=0, str2c=0;
   for(i=0; arr1[i]!='\0';i++)
    str1c++;
   for(i=0; arr2[i]!='\0';i++)
    str2c++;

    if(str1c>str2c)
        return 1;
    else if(str2c>str1c)
        return (-1);

   for(i=0;arr1[i]!='\0'; i++)
    {
        if(arr1[i]!=arr2[i])
            return (-1);

    }
    return 0;
}


