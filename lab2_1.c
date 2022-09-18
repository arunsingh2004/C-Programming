#include<stdio.h>
int main()
{
      int a,b,c=0,f=0,g=0;
      printf("Enter the number\n");
      scanf("%d%d",&a,&b);
      c=a+b;
      f=a*b;
      g=a%b;

      printf("sum is %d\n",c);
      printf("multipication is %d\n",f);
      printf("division is %d\n",g);
      return 0;
}