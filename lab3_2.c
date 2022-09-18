#include<stdio.h>
int main()
{
      int a,b,c,sum;
      float average;
      printf("enter  the value of a and b,c\n");
      scanf("%d%d%d",&a,&b,&c);
       sum= a+b+c;
       average=(a+b+c)/3;
       printf("sum is %d ",sum);
       printf("avearge is %f ",average);

      return 0;
}