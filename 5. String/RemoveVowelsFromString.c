#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int i,j;

    for(i=0; str[i]!='\0';i++)
    {
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
       {
           for(j=i;str[j]!='\0';j++)
           {
               str[j]=str[j+1];
           }
       }
    }

    puts(str);
    return 0;
}


