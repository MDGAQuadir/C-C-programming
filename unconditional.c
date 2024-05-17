#include<stdio.h>
 int main ()
{   
   int i;
   for (i=10;i>0;i--)
    {   
       goto y;
        printf("%d",i);
        continue ;
    if (i==3)
     {
       break;
       }
    y:
      printf("o");
    }
    return 0;
}