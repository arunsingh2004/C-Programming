#include<stdio.h>
int main()
{
      int a,b;
      printf("enter number a and b\n");
      scanf("%d%d",&a,&b);
      printf("the result is %d %d %d %d %d %d %d", ++a,a++,b--,b++,--a,++b,a--);
      return 0;
}