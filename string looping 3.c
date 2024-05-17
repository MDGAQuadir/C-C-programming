#include<stdio.h>

int main()
{
    char ch[20];
    printf("enter a string=");
    gets(ch);
    int i=0,j=0,l=0;
    while(ch[i]!='\0')
    {
        l++;
        i++;
    }
    for( i=l; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}