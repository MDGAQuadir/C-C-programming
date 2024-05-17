#include<stdio.h>
void main()
{
    int A[20],i,j,temp;
    printf("enter all element:");
    for(i=0; i<20; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("array elements before swaping\n");
    for(i=0; i<20; i++)
    {
        printf("%d,",A[i]);
    }
    for(i=0; i<19; i++)
    {
        for(j=i+1; j<20; j++)
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
    for(i=0;i<20;i++)
    {
     printf("%d,",A[i]);
    }
}