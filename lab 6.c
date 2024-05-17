#include<stdio.h>

int main ()
{
    int a=10,b;
    b=(++a)+(a--)-(a++)+(++a);
    printf("b=%d",b);

    return 0;
}