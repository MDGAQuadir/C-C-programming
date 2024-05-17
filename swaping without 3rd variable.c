#include<stdio.h>

 int main ()
{
   int a,b;
   printf("enter first integer a=");
   scanf("%d",&a);
   printf("enter second integer b=");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swaping a=%d",a);
   printf("\nafter swaping b=%d",b);
    
    return 0;
}