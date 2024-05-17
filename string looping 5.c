#include<stdio.h>

int main()
{
    char ch[20];
    printf("enter a string=");
    gets(ch);
    int i=0,j=0,l=0,k;
    while(ch[i]!='\0')
    {
        l++;
        i++;
    }
    for( i=0; i<=l; i++)
    {
        for(j=0; j<(4-i); j++)
        {
            printf(" ");
        }
        for(k=0; k<i; k++)
        {
            printf("%c",ch[k]);
        }
        printf("\n");
    }
    return 0;
}