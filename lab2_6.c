#include<stdio.h>
int main()
{
      float a,b,c;
      printf("Enter the  two number ");
      scanf("%f%f",&a,&b);
      c=a;
      a=b;
      b=c;
      printf("the number after swapping is %f and %f ", a,b);


      return 0;
}