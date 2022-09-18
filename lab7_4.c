 #include <stdio.h>
 #include<math.h>
 int main()
 {
     int r, r1, t, t1, n, count;
     double sum;
     for (int i = 1; i <= 10000; i++)
     {
         count = 0;
         sum = 0;
         t1 = i;
         t = i;
         while (t1 > 0) 
         {
             t1 = t1 / 10;
             count = count + 1;
         }
         while (t > 0)
         {
             r1 = t % 10;
             sum = sum + pow(r1, count);
             t = t / 10;
         }
         if ((int)sum == i)
         {
            printf("%d\n", i);
         }
     }
     return 0;
 }