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
        i++;
    }
    printf("\nlength of string is:%d",i);
    return 0;
}