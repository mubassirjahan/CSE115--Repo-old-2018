#include <stdio.h>

int main()

{
    //Declaration
   int num, rem, _num, reverseNum = 0;

   printf("Pls, enter a number to test for Palindrome:");
   scanf("%d",&num);
   _num = num;

   while(num!=0)
   {
       rem = num %10;

       reverseNum = reverseNum*10 +rem;

       num= num/10;
   }

   //printf("%d", reverseNum);

   if (reverseNum==_num)
    printf("\n%d is a Palindrome!!!",_num);
   else
    printf("\n%d is not a Palindrome!!!",_num);



    return 0;
}
