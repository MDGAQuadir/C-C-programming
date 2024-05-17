#include<stdio.h>
 int main ()
{   
   int i;
   for (i=10;i>0;i--)
    {   
        printf("%d",i);
        continue ;
    if (i==3)
     {
       break;
       }
    }
    return 0;
}