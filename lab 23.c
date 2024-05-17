#include<stdio.h>
int count(char[]);
void main()
{
  char A[40];
  printf("enter a string");
  gets(A);
  count(A);
}
int count(char ch[20])
{
    int i=0,c=0;
    while(ch[i]!='\0')
    {
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
    printf("count of special characters is:%d",c);
    return 0;
}