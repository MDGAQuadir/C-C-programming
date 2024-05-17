#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter a position integer");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
}
int fact(int x)
{
    if(x>=1)
    {
        return x * fact(x-1);
    }
    else
    {
        return 1;
    }
}