#include<stdio.h>
int main ()
{
    int i,j,k,l;
    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        for (l=1; l<=i; l++)
        {
            printf("%d",i);
        }
        for(k=1; k<i; k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}