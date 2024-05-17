#include<stdio.h>
void prime(int,int);
void main()
{
    int n,d;
    printf("enter a number");
    scanf("%d",&n);
    prime(n,d);
}
void prime (int x,int y)
{
    for(y=2; y<x; y++)
    {
        if(x%y==0)
        {
            break;
        }
    }
    if(y==x)
    {
        printf("it is prime");
    }
    else
    {
        printf("it is not prime");
    }
}