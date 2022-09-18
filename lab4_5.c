#include <stdio.h>
int main()
{
    int num;
    printf("Enter your mark ");
    scanf("%d",&num);
    printf(" You entered %d Marks \n", num); // printing outputs
    if(num >= 90 ){
        printf(" You got A+ grade \n"); // printing outputs
    }
    else if ( num >=80 && num<90){ // Note the space between else & if
        printf(" You got A grade \n");
    }
    else if ( num >=70 && num<80){
        printf(" You got B grade \n");
    }
    else if (num>=60 && num<70)
    {
          printf("You got C grade \n");
    }
    else if (num >=50 && num<60)
    {
          printf("You got D grade \n");
    }
    else if (num>=40 && num<50)
    {
          printf("You got P grade \n");
    }
    else if ( num < 40){
        printf(" You got F grade \n");
        printf(" Better Luck Next Time \n");
    }
    return 0;
}