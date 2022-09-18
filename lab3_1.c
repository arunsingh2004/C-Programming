#include<stdio.h>
int main(){
// declare variables da(dearness,allowance),hra(house rent allowance),ta(travelling allowance),
 //pf(providant fund), it(income tax),(basic salary),gross salary,net salary
 float b_sal,gross_sallary,da ,hra ,ta ,pf ,it ,net_sal ;
 printf("Enter the basic salary of employee\n");
 scanf("%f",&b_sal);

 //calculating gross_salary, da,hra,ta pf,nrt_salary ,it

 da =(0.31*b_sal);
 hra =(0.18*b_sal);
 ta =(0.06*b_sal);
 pf =(0.10*b_sal);
 it =(0.20*b_sal);
  gross_sallary = b_sal + da + hra + ta + pf + it;
  net_sal = gross_sallary - (pf + it);
   printf("The b_sal of employee is %f\n",b_sal);
   printf("The da of employee is %f\n",da);
   printf("The hra of employee is %f\n",hra);
 printf("The ta of employee is %f\n",ta);
  printf("The pf of employee is %f\n",pf);
  printf("The it of employee is %f\n",it);
  printf("The gross_sallary of employee is %f\n",gross_sallary);
  printf("The net_sal of employee is %f\n",net_sal);
  return 0;

}

 