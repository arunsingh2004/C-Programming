#include<stdio.h>
#include<math.h>
int main()
{
   int choice;
   printf("Enter 1 to find area of Triangle\n");
   scanf("%d",&choice);
   switch(choice) {
      case 1: {
         int a,b,c;
         float s,area;
         printf("Enter sides of triangle\n");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f\n",area);
         break;
      }
      
      default: {
         printf("Invalid Choice\n");
         break;
      }}}