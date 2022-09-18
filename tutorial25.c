#include <stdio.h>
#include <conio.h>
int main()
{
      int prno = 0, num = 1, nxtnum, term;
      static int i = 1;
      printf("enter the last number of the range");
      scanf("%d", &term);
      printf("the fibonacci series is : ");
      printf("1");
      if (i == term)
      {
            return 0;
      }
      else
      {
            for (i = 1; i < term;)
            {
                  nxtnum = prno + num;
                  prno = num;
                  num = nxtnum;
                  printf(" %d ", nxtnum);
                  i++;
            }
      }
      return 0;
}