#include<stdio.h>
// int sum(int a,int b)      WITH ARGUMENTS AND WITHOUT RETURN VALUE,WITH ARGUMENT AND WITH RETURN VALUE
// {
//       return a + b;
// }
int sum (int a, int b);
void printstar(int n)
{ 

      for (int i = 0; i < n; i++)
      {
            printf("%c",'*');
      }
      printf("%c",'*');
}
int takenumber()
{
 int i;
 printf("enter number is");
 scanf("%d", &i);
 return i;
}
int main()
{
 int a,b,c;
 a=9;
 b=87;
 //c= sum(a,b);
 //printstar(7);
 c = takenumber();
 printf("The number entered is %d", c);
// printf("The sum of c is%d\n",c);
 return 0;
} 
int sum(int a,int b)
{
      return a + b;
}