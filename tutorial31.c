#include<stdio.h>

void changeValue(int* adderess)
{
  *adderess =345;
}
int main()
{
      int a=34 , b=74;
      printf("The value of a is %d\n", a);
      changeValue(&a);
      printf("The value of a is %d\n",a);
      return 0;
}