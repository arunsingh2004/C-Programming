 #include<stdio.h>
 #include<math.h>
 int myfact(int n)
 {
     if (n==0||n==1)
     {
         return 1;
     }
     else
     return n*myfact(n-1);
 }
 float cose(float x,int n)
 {
     float sum=0;
     int sign=-1;
     for (int i = 0; i <= n; i++)
     {
         float k=0;
         sign=sign*(-1);
          k = (sign * (pow(x, (2 * i) ))) / myfact((2 * i));
          sum=sum+k;
     }
     return sum;
 }
 int main()
 {
     int x,n;
     printf("enter the angle in degree\n ");
     scanf("%d",&x);
     printf("enter the number of term\n");
     scanf("%u",&n);
     float angle =(x*3.141)/180;
     float f=cose(angle,n);
    printf("the value of cos(%d) is %f\n", x, f);
     return 0;
 }