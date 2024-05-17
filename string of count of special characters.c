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
        }
        else if(ch[i]>=48&&ch[i]<=57)
        {
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("\ncount of special characters is:%d",c);
    return 0;
}