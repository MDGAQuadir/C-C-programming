#include<stdio.h>
int main ()
{
    int remain,a,b=0;
    printf(" enter a number");
    scanf("%d",&a);
    while (a>0)
    {
        remain=a%10;
        b=b+remain;
        a=a/10;
        
    }
    printf("\n sum of digit of %d is=%d",a,b);
    return 0;
}