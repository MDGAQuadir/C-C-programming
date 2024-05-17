#include<stdio.h>

int main()
{
    char ch[20];
    int i=0,c=0;
    printf("enter a string=");
    gets(ch);
    printf("my string is %s",ch);
    while(ch[i]!='\0')
    {
        if(ch[i]==' ')
        {
            c=c+1;
        }
        i++;
    } 
    printf("\n%d",c);
    return 0;
}