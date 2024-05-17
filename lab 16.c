#include<stdio.h>
void main()
{
    int A[10],i,j,temp;
    for(i=0; i<10; i++)
    {
        printf("enter a element:");
        scanf("%d",&A[i]);
    }
    printf("array elements before swaping\n");
    for(i=0; i<10; i++)
    {
        printf("%d",A[i]);
    }
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("\narray elements after swaping\n");
    for(i=0;i<10;i++)
    {
     printf("%d",A[i]);
    }
}