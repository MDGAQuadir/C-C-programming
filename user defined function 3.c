#include<stdio.h>
void stringlength();
void main()
{
    stringlength();
}

void stringlength()
{
    char ch[20];
    int i=0,c=0;
    printf("enter a string=");
    gets(ch);
    printf("my string is %s",ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("\nlength of string is:%d",i);

}