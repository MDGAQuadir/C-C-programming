#include<stdio.h>
int main ()
{
    int remain,a,*n,sum=0,t;
    n=&a;
    printf(" enter a number");
    scanf("%d",n);
    t=*n;
    while (*n>0)
    {
        remain=*n%10;
        sum=sum+remain;
        *n=*n/10;
        
    }
    *n=t;
    printf("\n sum of digit of %d is=%d",*n,sum);
    return 0;
}