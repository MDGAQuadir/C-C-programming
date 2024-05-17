#include <stdio.h>
void main()
{
    int arr[10],n,i,j,temp;
    printf("enter no of elements for array:");
    scanf("%d",&n);
    printf("enter the %d no of  elements\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array before sorting :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0; i<(n-1); i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\narray after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

}