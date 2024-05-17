#include<stdio.h>

int main ()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("a=%d",a);
    printf("\nafter right shift of 2 bit a=%d",a>>2);

    return 0;
}