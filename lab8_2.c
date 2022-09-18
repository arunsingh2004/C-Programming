 #  include<stdio.h>
 void swap(int a,int b)
 {
     a=a+b;
     b=a-b;
     a=a-b;
     printf("the value of a and b after swaping is %d and %d\n",a,b);
 }
 int main()
 {
     int a,b;
     printf("enter the value of a and b\n");
     scanf("%d%d",&a,&b);
     printf("the value of a and b before swaping is %d and %d\n",a,b);
     swap(a,b);
     return 0;
 }