#include<stdio.h>
#include <conio.h>

int main()
{
    char Text[100], ch;
    int countChar=0, countSen=0, countWord=1, i;
    printf("Enter text: ");

    for(i=0; i<100;i++)
    {
        ch = getch();
        if(ch==13)
            break;
        putch(ch);
        Text[i]=ch;
        Text[i+1]='\0';
    }

    for(i=0;Text[i]!='\0';i++)
    {
        if(Text[i]=='.')
            countSen++;
        else if(Text[i]==' ')
            countWord++;
        else countChar++;
    }
    printf("\nCharacters: %d\nWords: %d\nSentences: %d",countChar,countWord,countSen);

    return 0;
}
