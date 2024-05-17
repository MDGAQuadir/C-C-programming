#include<stdio.h>
int main ()
{
    int a=0,b=1,c,*p1,*p2,n;
    p1=&a,p2=&b;
    printf("enter n");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    while (c<n)
    {
        c=*p1+*p2;
        printf("%d,",c);
        *p1=*p2;
        *p2=c;
    }
    return 0;
}