#include<stdio.h>
int sum(int,int);
void main ()
{
    int a,b,r;
    printf("enter a value for a & b");
    scanf("%d%d",&a,&b);
    r=sum(a,b);
    printf("sum=%d",r);
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    return(c);
}