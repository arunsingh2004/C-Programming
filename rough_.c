#include<stdio.h>
int main()
{
      int num=0,i=1;
      printf("enter the num\n");
      scanf("%d",&num);
      do{
            printf("%d\n",num*i);
            i++;
      }while(i<=10);

      return 0;
}