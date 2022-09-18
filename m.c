// #include<stdio.h>
// int main()
// {
//       int a,b,c;
//       printf("Enter the value f a:");
//       scanf("%d",&a);
//       if(a>=400)
//        b=300;
//        c=200;
//        printf("%d %d\n",b,c);
//       return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int x = 10, y = 20;
// 	if ( x == y );
// 	printf ( "\n%d %d", x, y );
// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
// 	int x = 3 ;
// 	float y = 3.0 ;
// 	if ( x == y )
// 	    printf ( "\nx and y are equal" );
// 	else
// 	    printf ( "\nx and y are not equal" );
// 	return 0;
// }
// #include<stdio.h>
// int main()
// {
//       int k=35;
//       printf("%d %d %d\n",k==35,k=50,k>40);
//       return 0;
// }
// #include<stdio.h>
// int main()
// {
//       int x=15;
//       printf("%d %d %d\n",x!=15,x=20,x<30);
//       return 0;
// }
// #include<stdio.h>
// int main( )
// {
// 	float a = 12.25, b = 12.52 ;
// 	if ( a = b )
// 	printf ( "\na and b are equal" ) ; 
// 	return 0;
// }
// #include<stdio.h>
// int main( )
// {
// 	int x = 10 ;
// 	if ( x >= 2 ) 
// 		printf ( "\n%d", x ) ; 
// 	return 0;
// }
// #include<stdio.h>
// #include<math.h>
// float sqaureArea(float side);  
// float circleArea(float rad);  
// float rectangleArea(float a, flaot b);  
// int main(){


//       return 0;
// }
// float squareArea(float side){
//       return side*side;
// }
// float circleArea(float rad){
//       return 3.14*rad*rad;
// }
//  #include<stdio.h>
//  #include<math.h>
//  int main(){
//        int age =22;
//        int*ptr=&age;
//        printf("%p\n",&age);
//        printf("%u\n",&age);
//        printf("%u\n",ptr);
//        printf("%u\n",&ptr);

//  }
 #include<stdio.h>
#include<math.h>
int main(){
      int i=5;
      int*ptr= &i;
      int**pptr=&ptr;
      printf("%d\n",*pptr);
      printf("%d\n",**pptr);
}
