#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp!=NULL){
        printf("File Has been opened");
        fclose(fp);
    }
    else printf("File not found");
    return 0;
}

