#include<stdio.h>

int main()
{
    int i,j,sum,k;
    for(i=1; i<200; i++)
    {
        k=i+4;
        sum=0;
        for(j=i; j<k; j++)
        {
            sum=sum+j;
            i=j;
            printf("%d,",j);
        }
        printf("%d,",sum);
    }
    return 0;
}