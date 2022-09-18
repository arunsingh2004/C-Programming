#include<stdio.h>
int main()
{
      char a;
      int i;
      for(i=1;i<10;i+=1)
      {
          for(a ='A';a<='I'; a++)
          {
                printf("%d%c   ",i,a);
          }
      printf("\n");
      }
      return 0;
}