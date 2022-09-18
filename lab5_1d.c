#include<stdio.h>
int lcm(int a,int b);
int hcf(int a,int b);
int main()
    {
    int a,b,ch,z;
   char choice='y';
    while(choice=='y' || choice=='Y')
       {
       printf("1.LCM");
       printf("\n2.HCF");
       printf("\nEnter your choice:=");
       scanf("%d",&ch);
       if(ch==1 || ch==2)
          {
          printf("\nEnter first number:=");
          scanf("%d",&a);
          printf("\nEnter second number:=");
          scanf("%d",&b);
          }
       switch(ch)
          {
          case 1:z=hcf(a,b);
             printf("LCM:=%d",z);
             break;
          case 2:
             z=lcm(a,b);
             printf("HCF:=%d",z);
             break;
          default:
             printf("Wrong choice");
            }
       }
          return 0;
       }
    
     
