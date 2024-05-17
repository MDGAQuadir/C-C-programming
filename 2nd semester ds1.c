#include<stdio.h>
void main()
{
    int A[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    printf("array elements is \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            if(A[i][j]==A[i][2])
            {
                j++;
            }
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}