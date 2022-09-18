#include<stdio.h>
int main(){
 int age , marks ;
 
 printf("Enter the age is\n");
 scanf("%d", &age);
 
 printf("Enter the marks is\n");
 scanf("%d", &marks);
 
  switch (age)
  {
  case 3:
        printf("Your age is 3\n");
      
        switch (marks)
        {
        case 45:
              printf("your marks is 45\n");
            
              break;
              case 56:
              printf("your marks is 56\n");
              break;
        
        default:
              printf("your marks is not 45 and 56\n");
        }
        break ;
   case 13:
    printf("your age is 13\n");
    break;
    case 23:
    printf("your age is 23\n");
    break;

  default:
   printf("your age is not 3,13 and 23");
        break;
  }


return 0;


}