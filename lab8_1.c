#include <stdio.h>
int sum(int a, int b, int c)
{
    return (a + b + c);
}
int product(int a, int b, int c)
{

    return (a * b * c);
}
void myfunc(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("the greatest no is %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("the greatest no is %d\n", b);
    }
    else
        printf("the greatest no is %d\n", c);
}
int main()
{
    int a, b, c;
    printf("enter the no a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    int d = sum(a, b, c);
    printf("the sum %d\n", d);
    int e = product(a, b, c);
    printf("the product is %d\n", e);

    myfunc(a, b, c);
    return 0;
}
