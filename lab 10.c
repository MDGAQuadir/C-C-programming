#include<stdio.h>

int main()
{
    int a,b;
    char op;
    printf("enter an erithmetic operater=");
    scanf("%c",&op);
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    switch (op)
    {
    case'+':
        printf("addition is =%d",a+b);
        break;
    case'-':
        printf("subtraction is=%d",a-b);
        break;
    case'*':
        printf("multiplication is=%d",a*b);
        break;
    case'/':
        printf("division is=%d",a/b);
        break;
    case'%':
        printf("modulus is=%d",a%b);
        break;
        default: printf("not valid");
        break;
    }


   
    return 0;
}