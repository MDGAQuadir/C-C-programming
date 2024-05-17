#include<stdio.h>

int main()
{
    int n=1,s=0;
    while (n<=20)
    {
        s=s+n;
        n++;
    }
    printf("sum of first 20 natural no=%d",s);
    return 0;
}