#include <stdio.h>
int main()
{
    int A[3][3],i,j,temp,n=0;
    printf("Enter The Array Elements = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Before Diagonal Swapping The Matrix is = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    n=2;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                temp=A[i][j];
                A[i][j]=A[i][n];
                A[i][n]=temp;
                n--;
            }
        }
    }
    printf("After Diagonal Swapping The Matrix is = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}