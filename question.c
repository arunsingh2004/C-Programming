#include<stdio.h>
#include <stdlib.h>
int main()
{
      int div=2,N;
      printf("Enter a number n");
      scanf("%d",&N);
      for(div=2; div<=N;div++)
      {
      if ( N % div==0)
      {
            

      printf("Not Prime number");
      break;
      }
      
      }
   
      else{
       printf("Prime number");

      }
      
      return 0;
}