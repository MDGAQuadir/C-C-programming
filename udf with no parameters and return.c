#include<stdio.h>
int add();
void main ()
{ 
  int r;
  r=add();
  printf("sum=%d",r);
}
int add()
{
 int a,b,c;
 printf("enter a value for a & b");
 scanf("%d%d",&a,&b);
 c=a+b;
 return (c);
}