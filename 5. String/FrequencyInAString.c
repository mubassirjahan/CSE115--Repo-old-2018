#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,count=0;
    char str[100];
    char unique[100];
    printf("Enter string: ");
    gets(str);
    strcpy(unique,str);

   for(i=0; unique[i]!='\0'; i++)
   {
        for(j=0;unique[j]!='\0'; j++)
        {
            if(i==j)
                continue;
            if(unique[i]==unique[j])
            {
                unique[j]=unique[j+1];
            }
        }
   }
   puts(unique);
   return 0;

    for(i=0; str[i]!='\0';i++)
    {
        count=0;
        for(j=0; str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                count++;
        }

        printf("\nFrequency of %c is: %d", str[i],count);
    }



    return 0;
}
