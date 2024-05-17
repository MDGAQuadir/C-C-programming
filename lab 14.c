#include<stdio.h>

int main()
{
    int n,r,d;
    printf("enter a value");
    scanf("%d",&r);
    for(n=2; n<=r; n++)
    {
        for (d=2; d<n; d++)
        {
            if (n%d==0)
            {
                break;
            }

        }
        if (n==d)
        {
            printf("%d,",n);
        }
        


    }
    return 0;
}