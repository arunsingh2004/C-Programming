#include <stdio.h>
#include <string.h>
struct student
{
  int id;
  int marks;
  char fav_char;
  char name[34];
} arun, harry, ravi;
// struct student arun, harry, ravi;
void print()
{
  printf("%s\n", arun.name);
}

int main()
{
  // struct student arun, harry, ravi;
  arun.id = 1;
  harry.id = 2;
  ravi.id = 3;
  arun.marks = 34;
  harry.marks = 35;
  ravi.marks = 65;
  arun.fav_char = 'p';
  harry.fav_char = 'p';
  ravi.fav_char = 'p';
  //strcpy(arun.name, "harry potter student of the year");
  //strcpy(harry.name, "harry potter");
   printf("Arun got %d marks\n", arun.marks);
  printf("Arun's Name is: %s\n", arun.name);
  //   printf("Harry got %d marks\n", harry.marks);
  // printf("Harry's Name is: %s\n", harry.name);
  print();
  return 0;
}
