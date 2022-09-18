#include <stdio.h>
#include <string.h>
typedef struct student
{
      int id;
      int marks;
      char fav_char;
      char name[34];
} std;
int main() 
{
     // int*a, b;
      typedef int*intPointer;
      intPointer a,b;
      int c= 89;
      a = &c;
      b = &c;
      // struct student s1,s2;
      // std s1,s2;
      //  s1.id=56;
      // s2.id=45;
      // printf("value of s1 is %d\n",s1.id);
      // printf("value of s2 is %d\n",s2.id);
      
      // type<previous_name> <alias_name>;
      // typedef unsigned long ul;
      // typedef int integer;
      // ul l1, l2, l3;
      // integer a = 4;
      // printf("the value of a is %d\n", a);
      return 0;
}