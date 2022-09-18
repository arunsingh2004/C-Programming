#include<stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a<b && b<c && c<d){
        printf("%d",d);
    }
    else if (c>d) {
    printf("%d",c);
    }
    else if (b>c) {
    printf("%d",b);
    }
    else if(a>b){
     printf("%d",a);
    }
    return 0;
}