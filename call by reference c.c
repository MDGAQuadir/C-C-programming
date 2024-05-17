#include<stdio.h>
void swap(int*,int*);
void main ()
{ 
 int a=5,b=10;
  swap(&a,&b);
printf("a=%d,b=%d",a,b);
}
void swap(int *x,int *y)
{
 int t=*x;
    *x=*y;
    *y=t;
printf("x=%d,y=%d",*x,*y);
}