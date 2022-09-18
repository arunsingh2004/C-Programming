 #include <stdio.h>
 int main()
 {
     int n, t, d, rev = 0;
     printf("enter a number");
     scanf("%d", &n);
     t = n;
     do
     {
         d = n % 10;
         rev = rev * 10 + d;
         n = n / 10;
     } while (n > 0);
     if (rev == t)
     {
         printf("%d is palindrome number", t);
     }
     else
         printf("%d is not palindrome number", t);
     return 0;
 }