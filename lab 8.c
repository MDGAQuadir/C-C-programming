#include<stdio.h>

int main()
{   int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b)
    {
        if (a<c)
        {
            printf("a is youngest.");
        }
    }
    else if (b<c)
    {
        printf("b is youngest.");
    }
    else
    {
        printf("c is youngest.");
    }
    return 0;
}