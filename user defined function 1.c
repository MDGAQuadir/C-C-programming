#include<stdio.h>
void temp();
 void main ()
{
 temp();
}

void temp()
{   
   float Tc,Tf;
   printf("room temp. in Fahrenheit=");
   scanf("%f",&Tf);
   Tc=(Tf-32)*5/9;
   printf("room temp. in centigrade =%f",Tc);
    ;
}