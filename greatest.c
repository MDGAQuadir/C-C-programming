#include<stdio.h>
 int main ()
{   
   int n,g=0,c=1;
   printf("enter a number");
   scanf("%d",&n);
   g=n;
  while (c<=5)
 {  
   printf("enter a number");
   scanf("%d",&n);
   if (n>g)
  {
   g=n;
  }
   c=c+1;
  
printf("greatest number between 6 number is%d",g);
    }
    return 0;
}