/*

1.	Write a C program that will take input of a line of text, character by character until ENTER key pressed. (Carriage return / Enter , ASCII Value=13)
Store it in an array called Text and print that array in reverse order using a pointer Ptr.
*/

#include<stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
    char str[80], ch;
    int i;
    printf("Enter text: ");

    for(i=0; i<80;i++)
    {
        ch = getch();
        if(ch==13)
            break;
        putch(ch);
        str[i]=ch;
        str[i+1]='\0';
    }
    char *ptr = &str[strlen(str)-1];

    printf("\nReversed String: ");
    while(ptr>=str)
    {
        printf("%c",*ptr);
        ptr--;
    }
    return 0;
}
