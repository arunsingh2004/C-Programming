#include <stdio.h>

int main()
{
	int n;
	printf("enter the number of rows\n");
scanf("%d",&n);
printf("\n");
for(int i=1;i<=n;i++)
{
for(int j=(i*i-i+2)/2;j<=(i*i+i)/2;j++)
{
	printf("%5d",j*j);
}
printf("\n");
}
return 0;
	
	
}