#include<stdio.h>

int main()
{
    char ch[20];
    int i=0;
    printf("enter a string=");
    gets(ch);
    printf("my string is %s",ch);
    while(ch[i]!='\0')
    {
        if(ch[0]>=97&&ch[0]<=122)
        {
            ch[i]=ch[i]-32;
        }
        if(ch[i]==' '||ch[i]=='.'||ch[i]==',')
        {
            i++;
            if(ch[i]>=97&&ch[i]<=122)
            {
                ch[i]=ch[i]-32;
            }
        }
        i++;
    }
    printf("\nfinal string is:%s",ch);
    return 0;
}