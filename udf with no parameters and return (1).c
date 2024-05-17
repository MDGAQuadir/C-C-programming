#include<stdio.h>
int naturalnumber();
void main ()
{
    int n;
    n=naturalnumber();
    printf("sum of first 20 no=%d",n);
}

int naturalnumber()
{
    int i,sum=0;
    for (i=1; i<=20; i++)
    {
        sum=sum+i;
    }
    return(sum);

}