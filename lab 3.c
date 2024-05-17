#include<stdio.h>

int main ()
{
    float b,h,A;
    printf("enter base of triangle");
    scanf("%f",&b);
    printf("\nenter height of triangle");
    scanf("%f",&h);
    A=(b*h)/2;
    printf("area of triangle=%f",A);

    return 0;
}