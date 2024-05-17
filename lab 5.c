#include<stdio.h>

int main ()
{
    int a,b;
    printf("enter first number=");
    scanf("%d",&a);
    printf("\nenter second number=");
    scanf("%d",&b);
    (a<b) ? printf("a is smallest") : printf("b is smallest");

    return 0;
}