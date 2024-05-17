#include<stdio.h>
void add();
void main ()
{
  add();
}
void add()
{
 int a,b;
 printf("enter a value for a & b");
 scanf("%d%d",&a,&b);
printf("sum=%d",a+b);
}