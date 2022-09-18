#include <stdio.h>
 int main()
 {
     int num, ctr = 2;
     for (num = 2; num <= 300; num++)
     {
         int count = 0;
         for (int i = 2; i <= num; i++)
         {
             if (num % i == 0)
             {
                 count++;
             }
         }
         if (count == 1)
         {
             printf("%d ", num);
         }
     }
     return 0;
 }