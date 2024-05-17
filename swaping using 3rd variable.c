#include<stdio.h>

 int main ()
{
   int a,b,x;
   printf("enter first integer a=");
   scanf("%d",&a);
   printf("enter second integer b=");
   scanf("%d",&b);
   x=a;
   a=b;
   b=x;
   printf("after swaping a=%d",a);
   printf("\nafter swaping b=%d",b);
    
    return 0;
}