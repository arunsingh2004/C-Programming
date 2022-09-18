// #include<stdio.h>
// int main(){
//     char A,E,I,O,U,a,e,i,o,u;
//   printf("Enter the alphabet\n");
//   scanf("%c",&A); 

//     if(A=="a"||A=="e"||A=="i"||A=="o"||A=="u"||A=="A"||A=="E"||A=="I"||A=="O"||A=="U")
//     {
//     printf("%c is vowel",A);
//     }

//     else{
//  printf("%c is consonant",A);

//     }





// return 0;
// }
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet:\n ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.\n\n", c);
    else
        printf("%c is a consonant.\n\n", c);
    return 0;
}
