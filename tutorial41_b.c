#include<stdio.h>

int b= 34; //This is global variables since it is declaed inside main()
int func1(int b1)
{

      int loc =89;
      printf("The value of b is inside func1 is %d\n",b);
      //printf("The address of b inside func1 is %d\n",&b);
      return b1*10;
}
int main()
{
      int b = 344;
         //printf("The address of b inside main is %d\n",&b);
         int val = func1(b);
         int*ptr = &val;
         printf("The value of func1 is %d\n",val);
        //printf(%d,loc)
      return 0;
}