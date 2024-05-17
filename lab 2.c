#include<stdio.h>

int main ()
{
    int a,b;
    a=20,b=79;
    printf("before swaping two integer a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swaping two integer a=%d and b=%d",a,b);

    return 0;
}