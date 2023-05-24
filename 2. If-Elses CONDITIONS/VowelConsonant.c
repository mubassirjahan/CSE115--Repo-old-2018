
#include <stdio.h>

int main()

{
    char let;
    printf("Input a letter:\n");
    scanf("%c", &let);

    switch (let)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant.");
    }
    return 0;

}

