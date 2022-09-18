#include<stdio.h>
int main()
{
      int a, b , smaller_number ;
       printf("enter the number a and b");
       scanf("%d%d",&a,&b);
       smaller_number=a>b?b:a;
       printf("smaller_number is %d",smaller_number);
      return 0;
}