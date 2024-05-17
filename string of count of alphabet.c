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
        printf("\n%d",ch[i]);
        if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
        {
            c++;
        }
        i++;
    }
    printf("\ncount of alphabet is:%d",c);
    return 0;
}