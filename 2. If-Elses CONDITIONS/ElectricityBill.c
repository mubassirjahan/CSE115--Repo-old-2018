
#include <stdio.h>

int main()
{
    int f500, f100, f50, f20, f10, f5, f2, f1; //f serial variables indicate the bills of Farhan
    //int f500=1, f100=7, f50=1, f20=0, f10=5, f5=1, f2=0, f1=0;
    int n500, n100, n50, n20, n10, n5, n2, n1; //n serial variables indicate the Necessary bills to pay

    int bill, totalM; //totalMoney is the money Farhan has


    printf("Enter amount:");
    scanf("%d", &bill);
    printf("Enter number of notes:\n");
    printf("500: ");
    scanf("%d",&f500);
    printf("100: ");
    scanf("%d",&f100);
    printf("50: ");
    scanf("%d",&f50);
    printf("20: ");
    scanf("%d",&f20);
    printf("10: ");
    scanf("%d",&f10);
    printf("5: ");
    scanf("%d",&f5);
    printf("2: ");
    scanf("%d",&f2);
    printf("1: ");
    scanf("%d",&f1);



    totalM = f500*500 +f100*100 + f50*50 + f20*20 + f10*10 + f5*5 + f2*2 + f1;

    printf("\nTotal Farhan's Money: %d\n", totalM);

    if (bill>totalM)
    {
        printf("Farhan doesn't have enough money");
        return 0;       //ends the program here
    }

   for( n500=1 ;n500<=f500 && n500*500<=bill; n500++)
   {

   } //Here n500 is increased
   n500--;
   bill = bill - (n500*500);

   for( n100=1 ;n100<=f100 && n100*100<=bill; n100++)
   {

   }
   n100--;
   bill = bill - n100*100;

   for( n50=1 ;n50<=f50 && n50*50<=bill; n50++)
   {

   }
   n50--;
   bill = bill - n50*50;

   for( n20=1 ;n20<=f20 && n20*20<=bill; n20++)
   {

   }
   n20--;
   bill = bill-n20*20;

   for( n10=1 ;n10<=f10 && n10*10<=bill; n10++)
   {

   }
   n10--;
   bill= bill-n10*10;

   for( n5=1; n5<=f5 && n5*5<=bill; n5++)
   {

   }
   n5--;
   bill = bill- n5*5;

    for( n2=1 ;n2<=f2 && n2*2<=bill; n2++)
   {

   }
   n2--;
   bill = bill - n2*2;

    for( n1=1 ;n1<=f1 && n1<=bill; n1++)
   {

   }
   n1--;
   bill=bill-n1;

   if (bill==0)
   {
       printf("Farhan can pay the bill using the following counts of different notes:\n");
       printf("500 : %d\n100 : %d\n50 : %d\n20 : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d",n500, n100, n50, n20, n10, n5, n2, n1);

   }
   else
       printf("It is NOT POSSIBLE for Farhan to pay the bill.");

    return 0;
}
