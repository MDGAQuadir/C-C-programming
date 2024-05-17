#include <stdio.h>
int main()
{
    int i,j,k;
    int A[3][3],B[3][4],C[3][4];
    printf("enter elements of 1st matrix = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter elements of 2nd matrix = \n");
    for(i=0; i<3; i++)

    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            C[i][j]=0;
            for(k=0; k<3; k++)
            {
                C[i][j]+=A[i][k] * B[k][j];
            }
           
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}