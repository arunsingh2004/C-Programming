#include<stdio.h>
int main(){
 int a,b,smaller_number;
  printf("\n\nEnter two number \n\n\n");
  scanf("%d%d", &a,&b);
  smaller_number= a>b?b:a;
   printf(" smaller number is %d\n", smaller_number);
   return 0;
}