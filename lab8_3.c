 #include <stdio.h>
 int fact(int n)
 {
     if (n == 0 || n == 1)
     {
         return 1;
     }
     else
         return n * fact(n - 1);
 }
 int main()
 {
     int n, factorial;
     printf("enter the no of which you want the factorial\n");
     scanf("%d", &n);
     factorial = fact(n);
     printf("the factorial of entered number is %d\n", factorial);
     return 0;
 }