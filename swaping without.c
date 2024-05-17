#include<stdio.h>
 int main ()
{   
   int a,b;
   printf("\n enter two numbers");
   scanf("%d%d",&a,&b);
   printf("\n value before swaping a=%d and b=%d",a,b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("\n value after swaping a=%d and b=%d",a,b);
    return 0;
}