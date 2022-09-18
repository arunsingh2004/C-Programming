#include <stdio.h>
 int main()
 {
     int n, var = 1, s = 0;
     int avg;
     printf("enter the no ");
     scanf("%d", &n);
    do
    {
         s = s + var;
         var++;
         avg = s / n;

     } while (var <= n);
     printf("the sum is%d\n", s);
     printf("the average is %d\n", avg);
     return 0;
 }
