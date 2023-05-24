#include <stdio.h>

int main(){

  int num, result=1;

  printf("Enter any number:");
  scanf("%d",&num);

  while(num!=0){
    result = result*num;
    num--;
  }
  printf("%d",result);
   return 0;
}
