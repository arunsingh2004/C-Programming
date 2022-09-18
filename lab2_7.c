#include<stdio.h>
int main()
{
      int a,b;
      printf("Enter the  two number ");
      scanf("%d%d",&a,&b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("the number after swapping is %d and %d ", a,b);


      return 0;
}