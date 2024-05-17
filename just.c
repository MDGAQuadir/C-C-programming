#include<stdio.h>

int main()
{
    int a,b;
    char op;
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    printf("\nenter an erithmetic operater=");
    scanf("%c",&op);
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


    getchar();
    return 0;
}