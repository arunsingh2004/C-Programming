#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct Driver
{
      char name[34];
      char dlNo[45];
      char route[47];
      int kms;
};

int main()
{
      struct Driver d1, d2, d3;
      printf("Enter the details of the  driver No.1\n");
      printf("Enter the name of the first driver\n");
      scanf("%s", &d1.name);

      printf("Enter the dlNo of the first driver\n");
      scanf("%s", &d1.dlNo);

      printf("Enter the route of the first driver\n");
      scanf("%s", &d1.route);

      printf("Enter the number  of kms the first driver\n");
      scanf("%d", &d1.kms);
      printf("Enter the details of the  driver No.2\n");
      printf("Enter the name of the second driver\n");
      scanf("%s", &d1.name);

      printf("Enter the dlNo of the second driver\n");
      scanf("%s", &d1.dlNo);

      printf("Enter the route of the second driver\n");
      scanf("%s", &d1.route);

      printf("Enter the number  of kms the second driver\n");
      scanf("%d", &d1.kms);
      printf("Enter the details of the  driver No.3\n");
      printf("Enter the name of the third driver\n");
      scanf("%s", &d1.name);

      printf("Enter the dlNo of the third driver\n");
      scanf("%s", &d1.dlNo);

      printf("Enter the route of the third driver\n");
      scanf("%s", &d1.route);

      printf("Enter the number  of kms the third driver\n");
      scanf("%d", &d1.kms);

      printf("****Prenting Information of these Driver******");
      printf("For Driver No.1:Name is %s\n", d1.name);
      printf("dl number is %s\n", d1.dlNo);
      printf(" route is %s\n", d1.route);
      printf(" kms is %d\n", d1.kms);

      printf("For Driver No.2:Name is %s\n", d1.name);
      printf("dl number is %s\n", d1.dlNo);
      printf(" route is %s\n", d1.route);
      printf(" kms is %d\n", d1.kms);

      printf("For Driver No.3:Name is %s\n", d1.name);
      printf("dl number is %s\n", d1.dlNo);
      printf(" route is %s\n", d1.route);
      printf(" kms is %d\n", d1.kms);
}
