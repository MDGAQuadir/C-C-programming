#include<stdio.h>
int main ()
{
    int remain,a,b=0,a1;
    printf(" enter a number");
    scanf("%d",&a);
    printf("a is =%d",a);
    a1=a;
    while (a>0)
    {
        remain=a%10;
        b=b*10+remain;
        a=a/10;
        
    }
    if (a1==b)
      printf("\nit's pallendrum");
    else
      printf("\nit's not");
    return 0;
}