#include<stdio.h>

 int main ()
{
   int p,c,b,t;
   float a;
   printf("enter physics mark=");
   scanf("%d",&p);
   printf("enter chemistry mark=");
   scanf("%d",&c);
   printf("enter biology mark=");
   scanf("%d",&b);
   t=p+c+b;
   a=t/3;
   printf("total=%d",t);
   printf("\naverage=%f",a);
    
    return 0;
}