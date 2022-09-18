#include<stdio.h>
int main()
{
      float celcius,fahrenheit=0;
      printf("Enter the temperature in celcius is\n");
      scanf("%f",&celcius);
      fahrenheit=(celcius*1.8) + 32;
      printf("Temperature in fahrenheit is %f",fahrenheit);
      return 0;
}