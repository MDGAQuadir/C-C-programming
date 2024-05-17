#include <stdio.h>
int main()
{
    int A[4][4],i,j,t,n=0;
    printf("Enter The Array Elements = \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Before Diagonal Swapping The Matrix is = \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    n=3;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(i==j)
            {
                t=A[i][j];
                A[i][j]=A[i][n];
                A[i][n]=t;
                n--;
            }
        }
    }
    printf("After Diagonal Swapping The Matrix is = \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}