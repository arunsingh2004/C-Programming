#include<stdio.h>
int main ()
{
 int a;
 printf("enter the value of a is \n");
 scanf("%d", &a);

 switch (a)
 {
 case 1:
       /* code */printf("value is 2");
       break;
 case 2:
  printf("value  is 3");
   break;
 default:
 printf("nothing match");
       break;
 }

 return 0;
}




