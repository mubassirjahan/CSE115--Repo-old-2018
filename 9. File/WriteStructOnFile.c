///Problem 5

#include <stdio.h>
#include<stdlib.h>

struct Books{
    char title[20];
    char author[20];
    char subject[20];
    char bookID[10]; ///Char because int can't take such big number
};

int main()
{
    FILE *fp;
    fp=fopen("Books.txt","w");
    int n, i;
    printf("Enter number of books");
    scanf("%d",&n);
    struct Books b[n];
    fflush(stdin);

    for(i=0;i<n;i++)
    {
        printf("Enter Title: ");
        gets(b[i].title);
        printf("Enter Author: ");
        gets(b[i].author);
        printf("Enter Subject: ");
        gets(b[i].subject);
        printf("Enter Book ID: ");

        gets(b[i].bookID);
    }
    for(i=0;i<n;i++)
    {

        fputs(b[i].title,fp);
        fputs("\n",fp);
        fputs(b[i].author,fp);
        fputs("\n",fp);
        fputs(b[i].subject,fp);
        fputs("\n",fp);
        fputs(b[i].bookID,fp);
        fputs("\n",fp);
    }
    fclose(fp);

    return 0;
}
