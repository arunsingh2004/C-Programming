#include<stdio.h>
int main()
{
      int num,check;
      printf("enter any number");
      scanf("%d",&num);
      check=num%2==0?printf("the number  is even"):printf("the number is odd");
      
      return 0;
}