 #include<stdio.h>
int main()
{
      int num;
 printf("Enter the number you want multipication table of \n");
 scanf("%d", &num);

  printf("Multipication table  of %d as follow:\n",num);

  for (  int i = 0; i < 11; i++)   
  {
        printf("%d*%d=%d\n", num,i,num*i );
  }
  
 return 0;
}