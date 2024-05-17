#include<stdio.h>

int main()
{
    char ch[20];
    int i=0,l=0;
    printf("enter a string=");
    gets(ch);
    printf("my string is %s",ch);
    while(ch[l]!='\0')
    {
        l++;
    }
    printf("\nlength of string is %d\n",l);
    i=l;
    while(i>=0)
    {
        printf("%c",ch[i]);
        i--;
    }

    return 0;
}