#include <stdio.h>
int main()
{
    int num1,num2,num3;//declare variaables
    printf("Enter three numbers to find middle\n");
    scanf("%d %d %d",&num1,&num2,&num3);
//takes input from user for numbers
    if(num1>num2) {
        if(num2>num3){
        printf("%d is a middle number",num2);
    }
    else if(num3>num1){
        printf("%d is a middle number",num1);
    }
    else{
        printf("%d is a middle number",num3);
    }
    }
    else{
        if(num2<num3){
        printf("%d is a middle number",num2);
    }
    else if(num3<num1){
        printf("%d is a middle number",num1);
    }
    else{
        printf("%d is a middle number",num3);
    }

    }
    return 0;
}