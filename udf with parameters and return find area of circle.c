#include<stdio.h>
float area(float);
void main ()
{
    float r,A;
    printf("enter radious=");
    scanf("%f",&r);
    A=area(r);
    printf("area of circle=%f",A);
}
float area(float d)
{
    float area;
    area=3.14*d*d;
    return(area);
}