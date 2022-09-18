#include<stdio.h>
int main()
{
 int a,b,c,sum,average;
 printf("Enter value of a,b,c");
 scanf("%d%d%d",&a,&b,&c);
 sum = a+b+c;
 average = a+b+c/3;
 printf("sum of given number is%d\n\n",sum);
 printf("average of three number is %d\n\n",average);
 return 0;
}