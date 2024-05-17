#include<stdio.h>
int naturalnumber();
void main ()
{   int R;
    R=naturalnumber();
    printf("sum of first 50 number=%d",R);
}

int naturalnumber()
{
    int i,sum=0;
    for (i=1; i<=50; i++)
    {
        sum=sum+i;
    }
    return(sum);
    
}