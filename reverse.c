#include<stdio.h>
int main ()
{
    int remain,a,b=0;
    printf(" enter a number");
    scanf("%d",&a);
    printf("a is =%d",a);
    while (a>0)
    {
        remain=a%10;
        b=b*10+remain;
        a=a/10;
        
    }
    printf("\n reverse  is=%d",b);
    return 0;
}