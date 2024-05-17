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
        if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            c++;
        }
        else if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            c++;
        }
        i++;
    }
    printf("\ncount of vowels are:%d",c);
    return 0;
}