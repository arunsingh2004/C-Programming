#include<stdio.h>
int main()
{
      int interest,amount, rate ,time;
      printf("Enter amount, rate, time is ");
      scanf("%d%d%d",&amount,&rate,&time);
      interest=(amount*rate*time)/100;
      printf("interest is %d ",interest);
      return 0;
}