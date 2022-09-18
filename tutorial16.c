#include<stdio.h>
int main()
{
 printf("Hello world");
 int i , age;
 for ( i = 0; i <10; i++){
 
      printf("%d\nEnter your age \n",i);
      scanf("%d", &age);
      if (age>10)
      {
          //   break;
            continue;
      }
      printf("arun is good boy");
 }
      return 0;
 }