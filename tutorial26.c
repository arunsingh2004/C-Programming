#include <stdio.h>
int main()
{
      printf("Lets  learn of pointers\n");
      int a = 76;
      int *ptra = &a;
      int *ptr2 = NULL;
      printf(" The adderess of pointer to a is %p\n", &ptra);
      printf(" The value of a is %p\n", *ptra);
      printf("Enter the value of a is %p\n", ptra);
      printf("Enter the  some garbage value of a is %p\n", ptr2);
      printf("Enter the value of a is %d\n", *ptra);
      printf("Enter the value of a is %d\n", a);
      return 0;
}