#include <stdio.h>
int main()
{

      //   char a = '3';
      // char*ptra = &a;
      //    ptra++;
      //    printf("%d\n",ptra);
      //    printf("%d\n",ptra-2);
      int arr[] = {1, 2, 3, 4, 5, 6, 67};
      int* arrayptr = arr;
      printf("value at position 3 of the array is %d\n", arr[3]);
      printf("The address of first position of array is %d\n", &arr[0]);
      printf("The address of first position of array is %d\n", arr);
      printf("The address of second position of array is %d\n", &arr[1]);
      printf("The address of first position of array is %d\n", arr + 1);
      //arr++; this line throw  an error 
     arrayptr++;
      printf("The value of  address of first position of array is %d\n", *(&arr[0]));
      printf("The value of address of first position of the array is %d\n", arr[0]);
      printf("The value of address of first position of array is %d\n", *(arr));
      printf("The value of address of second position of array is %d\n", *(&arr[1]));
      printf("The value of address of first position of array is %d\n", *(arr + 1));

      return 0;
}