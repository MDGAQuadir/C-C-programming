#include<stdio.h>

void main()
{
    int X[15],i,G,S;
    printf("enter all element ");
    for(i=0; i<15; i++)
    {
     scanf("%d",&X[i]);
    }
    G=S=X[0];
    for(i=0;i<15;i++)
    {
     if(X[i]>G)
    {
     G=X[i];
    }
    if(X[i]<S)
    {
     S=X[i];
    }
    }
    printf("greatest integer is %d",G);
    printf("\nsmallest integer is %d",S);
}