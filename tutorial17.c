#include <stdio.h>
int main()
{
      //  label:
      //  printf("we are inside label");
      // printf("Hello world\n");
      // goto label;
      //  end:
      printf("I am arun\n");
      int num;
      for (int i = 0; i < 8; i++)
      {
            printf("%d", i);
            for (int j = 0; j < 8; j++)
            {
                  printf("enter the number  \n");
                  scanf("%d", &num);
                  if (num == 0)
                  {
                        //    break;
                         goto end;
                  }
            }
      }

 end:

      return 0;
}