#include<stdio.h>

 int main ()
{   
   float b,l,a,p;
   printf("enter b=");
   scanf("%f",&b);
   printf("enter l=");
   scanf("%f",&l);
   a=b*l;
   p=2*(b+l);
   printf("area of rectangle=%f",a);
   printf("\nperimeter of rectangle=%f",p);
    
    return 0;
}