#include<stdio.h>

int main ()
{
    float SI,PA,RI,D;
    printf("enter principle amount=");
    scanf("%f",&PA);
    printf("\nenter rate of interest=");
    scanf("%f",&RI);
    printf("\nenter duration=");
    scanf("%f",&D);
    SI=(PA*RI*D)/100;
    printf("Simple interest=%f",SI);

    return 0;
}