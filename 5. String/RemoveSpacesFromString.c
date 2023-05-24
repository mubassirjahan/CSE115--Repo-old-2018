#include <stdio.h>

int main()
{
    char str[100], str2[100];
    int count = 0;
    printf("Input string: ");
    gets(str);
    //puts(str);
    int i, j=0;
    for(i=0; str[i]!='\0'; i++)
    {
       if(str[i]==' ')
           continue;

       str2[j++] = str[i];
       str2[j]= '\0';
    }
    printf("Output string:");
    puts(str2);

    return 0;
}
