#include<stdio.h>

int main()
{   float a,b,c;
    printf("enter three numbers");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is tallest");
        }
    }
    else if (b>c)
    {
        printf("b is tallest");
    }
    else
    {
        printf("c is tallest");
    }
    return 0;
}