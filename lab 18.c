#include <stdio.h>
int main()
{
    int m,n,s,i,j,k;
    printf("enter size of 1st matrix");
    scanf("%d%d",&m,&n);
    printf("enter size of 2nd matrix");
    scanf("%d",&s);
    int A[m][n],B[n][s],C[m][s];
    printf("enter elements of 1st matrix = \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter elements of 2nd matrix = \n");
    for(i=0; i<n; i++)

    {
        for(j=0; j<s; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<s; j++)
        {
            C[i][j]=0;
            for(k=0; k<n; k++)
            {
                C[i][j]+=A[i][k] * B[k][j];
            }
           
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<s; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}