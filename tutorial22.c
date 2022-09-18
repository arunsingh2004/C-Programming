#include <stdio.h>
int main()
{
      char input;
      float kmstomiles = 0.621371;
      float inchestoFoot = 0.0833333;
      float cmstoinches = 0.393701;
      float poundtokgs = 0.453592;
      float inchestoMeter = 0.0254;
      float first, second;

      while (1)
      {
            printf("Enter the input character. q to quit\n  1.kms to miles\n 2.inches to Foot\n 3.cms to inches\n  4.pounds to kgs\n 5.inches to Meter\n");
            scanf("%c", &input);

            switch (input)
            {
            case 'q':
                  printf("Quitting the program....");
                  // goto end;
                  break;
            case '1':
                  printf("Enter quamtity in terms of first unit\n");
                  scanf("%f", &first);

                  second = first * kmstomiles;
                  printf("%f kms equal to %f miles\n", first, second);
                  break;

            case '2':
                  printf("Enter quamtity in terms of first unit\n");
                  scanf("%f", &first);

                  second = first * inchestoFoot;
                  printf("%f inches equal to %f foot\n", first, second);
                  break;

            case '3':
                  printf("Enter quantity in terms of first unit\n");
                  scanf("%f", &first);

                  second = first * cmstoinches;
                  printf("%f cms equal to %f inches\n", first, second);
                  break;
            case '4':
                  printf("Enter quantity in terms of first unit\n");
                  scanf("%f", &first);

                  second = first * poundtokgs;
                  printf("%fpound  equal to %f kgs\n", first, second);
                  break;
            case '5':
                  printf("Enter quamtity in terms of first unit\n");
                  scanf("%f", &first);

                  second = first * inchestoMeter;
                  printf("%f inches equal to %f meters\n", first, second);
                  break;
            default:
                  break;
            }
      }
// end:
      return 0;
}