#include<stdio.h>

int main()
{
    int n,g=0,c;
    printf ("enter a number");
    scanf ("%d",&n);
    g=n;
    for (c=1; c<10; c++)
    {
        printf ("enter a number");
        scanf("%d",&n);
        if (n>g)
        {
            g=n;
        }
    }
    printf("greatest number among 10 numbers is %d",g);

    return 0;

}