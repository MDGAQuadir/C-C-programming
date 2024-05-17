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
        if(ch[i]==' '||ch[i]==','||ch[i]=='.')
        {
            c++;
        }
        i++;
    }
    c++;
    printf("\nno of word is:%d",c);
    return 0;
}