#include<stdio.h>
int main()
{
      float radius, area,circumference;
      printf("eneter the value of radius");
      scanf("%f",&radius);
      area=3.14*radius*radius;
      circumference= 2*3.14*radius;
      printf("area is %f\n",area);
      printf("circumference is %f\n",circumference);

      return 0;
}