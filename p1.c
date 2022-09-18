#include<stdio.h>
int main()
{
 //declearing the number from user
 int num,check;
 printf("Enter the number u want to check for odd or even\n");
 scanf("%d",&num);

 //using the conditional operator to check even or odd and storing to variables check
  check=(num%2==0)?printf("the number is even"):printf("the number is odd");

  return 0;
}