#include<stdio.h>

int main()
{
    char ch[20];
    int i=0,l=0,flag=1;
    printf("enter a string=");
    gets(ch);
    while(ch[l]!='\0')
    {
        i++;
        l++;
    }
    i=0,l--;
    while(i<=l)
    {
        if(ch[i]!=ch[l])
        {
         flag=0;break;
        }
        i++;
        l--;
    }
    if(flag==1)
    {
     printf("it's palindrome");
    }
    else
      {
     printf("it's not palindrome");
    }
    return 0;
}