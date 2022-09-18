#include<stdio.h>
int main()
{
      int length,breadth,area,perimeter;
      printf("length and breadth is \n");
      scanf("%d%d",&length,&breadth);
      area=length*breadth;
      perimeter=2*(length+breadth);
      printf("the area of rectangle is %d\n",area);
      printf("perimeter if rectangle is %d\n",perimeter);
      return 0;
}