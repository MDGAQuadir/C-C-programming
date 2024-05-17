#include<stdio.h>
void naturalnumber();
void main ()
{
    naturalnumber();
}

void naturalnumber()
{
    int i,sum=0;
    for (i=1; i<=25; i++)
    {
        sum=sum+i;
    }
    printf("sum of first 25 number=%d",sum);

}