#include<stdio.h>
int main()
{
int n,i;
printf("\nEnter the number\n" );
scanf("%d",&n);
for(i = 2; i <= n/2; i++)
{
if(n % i ==0)
{
break;
}
}
if(i>n/2){

printf("%d is a Prime Number\n",n);
}

else{

printf("%d is not a Prime Number\n", n);
}
return 0;
}