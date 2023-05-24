/*3. A password is called STRONG if it holds all of the following properties:
                                                                                                                                                  [10]

(a)	It has at least 8 characters
(b)	It contains at least one lower case letter, and at least one upper case letter
(c)	It does not contain any blank space


Write down a program that will take a password as input to a string and will print a message indicating whether it is STRONG or WEAK.
Sample input: Strange
Sample output: The password is WEAK*/
#include <stdio.h>
#include <string.h>

int main()
{
    char pass[20];
    int hasLowCase=0, hasUpCase=0, hasSpace=0,i;
    printf("Enter your password: ");
    gets(pass);

    int length=strlen(pass);

    if(length<8){
        printf("WEAK");
        return 0;
    }

    for(i=length-1; i>=0; i--)
    {
        if(pass[i]>='a' && pass[i]<='z')
            hasLowCase=1;
        else if(pass[i]>='A' && pass[i]<='Z')
            hasUpCase=1;
        else if(pass[i]=' ')
            hasSpace=1;
    }

    if(hasSpace==0 && hasLowCase==1 && hasUpCase==1)
        printf("STRONG");
    else printf("WEAK");

    return 0;
}

