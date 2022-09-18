// #include<stdio.h>
// //function prototype
// void printHello();
// int main()
// {
//       //function call
//       printHello();

//       return 0;
// }
// //function declaration
// void printHello(){
//       printf("Hello World");
// }
// #include<stdio.h>
//  int calcSquare( int n);
// int main()
// {
//       int square,n;
//       printf("Enter the number:");
//       scanf("%d",&n);
//       printf("the square of number is %d", calcSquare(n));
//       return 0;
// }
// int calcSquare( int n ){
//       return n*n;
// }
// #include<stdio.h>
// int factorial(int n);

// int main()
// {
//       int n;
//       printf("enter the number:");
//       scanf("%d",&n);
//       printf("the factorial of number is %d",factorial(n));

//       return 0;
// }
// int factorial( int n){
//       if (n==0 || n==1)
//       {
//             return 1;
//       }

//     int fact1= factorial(n-1);
//     int factn=fact1*n;
//     return factn;
// }
// #include<stdio.h>
// int main() {
// int age = 22;
// int *ptr = &age;
// int _age = *ptr;
// printf("%d\n", _age);
// //address
// printf("%p\n", &age);
// printf("%p\n", ptr);
// printf("%p\n", &ptr);
// //data
// printf("%d\n", age);
// printf("%d\n", *ptr);
// printf("%d\n", *(&age));
// return 0;}
// # include <stdio.h>
// void square(int n);
// void _square(int* n);
// int main() {
// int number = 4;
// //call by value
// square(number);
// printf("n is : %d\n", number);
// //call by reference
// _square(&number);
// printf("n is : %d\n", number);
// return 0;
// }
// void square(int n) {
// n = n * n;
// printf("square is : %d\n", n);
// }
// void _square(int* n) {
// *n = *n * *n;
// printf("square is : %d\n", *n);
// }
// # include <stdio.h>
// void swap(int a, int b);
// void _swap(int* a, int *b);
// int main() {
// int x = 3, y = 5;
// //call by value
// swap(x, y);

// printf("x = %d & y = %d\n", x, y);
// //call by reference
// _swap(&x, &y);
// printf("x = %d & y = %d\n", x, y);
// return 0;
// }
// void swap(int a, int b) {
// int t = a;
// a = b;
// b = a;
// }
// void _swap(int* a, int* b) {
// int t = *a;
// *a = *b;
// *b = *a;
// }
// ARRAY
// # include <stdio.h>
// int main() {
// int marks[3];
// printf("physics : ");
// scanf("%d", &marks[0]);
// printf("chem : ");
// scanf("%d", &marks[1]);
// printf("math : ");
// scanf("%d", &marks[2]);
// printf("physics = %d, ", marks[0]); //physics
// printf("chem = %d, ", marks[1]); //chem
// printf("math = %d \n", marks[2]); //math

// return 0;
// }
// # include <stdio.h>
// int main() {
// int age = 22;
// int *ptr = &age;
// int _age = 25;
// int *_ptr = &_age;
// printf("%u\n", ptr);
// ptr++;
// printf("%u\n", ptr);
// ptr--;
// printf("%u\n", ptr);
// ptr = ptr - _ptr;
// printf("%u\n", ptr);
// ptr = &_age;
// printf("%d\n", ptr == _ptr);
// return 0;
// }
// # include <stdio.h>
// void printNumbers(int *arr, int n);
// void _printNumbers(int arr[], int n);
// int main() {
// int arr[] = {1, 2, 3, 4, 5, 6};
// printNumbers(arr, 6);
// printNumbers(arr, 6);
// return 0;
// }

// void printNumbers(int *arr, int n) {
// for(int i=0; i<n; i++) {
// printf("%d : %d\n", i, arr[i]);
// }
// }
// void _printNumbers(int arr[], int n) {
// for(int i=0; i<n; i++) {
// printf("%d : %d\n", i, arr[i]);
// }
// }
#include<stdio.h>
int main()
{
      int j=0;
      while(j<=10);
      {
            printf("%d\n",j);
            j++;
      }
      return 0;
}