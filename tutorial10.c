#include<stdio.h>
int main()
{
 int age;
 printf("Enter your age\n");
 scanf("%d\n", &age);
  printf("your Enter your age is %d\n", age);
  if (age>18)
  {
      printf("you can vote !");  /* code */
  }
  else if (age>10)
  {
        /* code */printf("you age between 10 and 18 you can vote for kids ");
  }
  
  else
  {
        printf("you cannot vote !");

        /* code */
  }
      return 0;
}