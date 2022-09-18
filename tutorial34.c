#include<stdio.h>

 void printstr(char str[])
 {
   int i =0;
   while (str[i]!='\0')
   {
         printf("%c",str[i]);
         i++;
   }
   printf("\n");


 }
int main()
{
          // char str[] = {'A','r','u','n','\0'};
        //  char str[]= "Arun";
        char str[34];
        gets(str);
        printf("Usinf custom function printstr\n");
         //  printstr(str);
         printf(" using printf %s\n",str);
         printf("using puts:\n");
    puts(str);
      return 0;
}