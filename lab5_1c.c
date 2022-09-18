#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,a,temp;
    int ch;
    printf("Enter p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    printf("\n 1 for SI");
    printf("\n 2 for CI");
    printf("\n Select any option");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            si=(p*r*t)/100;
            printf("The simple interest is %f",si);
            break;
        case 2:
            temp=(1+r/100);
            a=p*pow(temp,t);
            ci=a-p;
            printf("The compound interest is %f",ci);
            break;
    }
    return 0;
}