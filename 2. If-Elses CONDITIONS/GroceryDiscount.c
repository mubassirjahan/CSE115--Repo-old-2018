//15% discount if the expense is greater than 3000


#include <stdio.h>

int main()

{
    int quantity, price;
    float discount=0.00, totalExpense;

    printf("Please input the quantity of item:");
    scanf("%d",&quantity);
    printf("Please input the price of item:");
    scanf("%d",&price);



    totalExpense= quantity*price;
    printf("Expense : %f",totalExpense);

    if(totalExpense>3000)
       discount= 0.15;


    totalExpense = totalExpense - (totalExpense*discount);

    printf("Expense : %f",totalExpense);


    return 0;
}
