#include<stdio.h>


int stack[10];
int top=-1;
int maxsize=10;
void push();
void pop();
void display();


int main()
{
    int op;
    while(1)
    {
        printf("Operation in stack\n------------\n");
        printf("1-Push\n2-Pop\n3-display\n4-exit\n");
        printf("enter your choice:\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}

void push()
{
    int item;
    printf("enter a item:\n");
    scanf("%d",&item);
    if(top==(maxsize-1))
    {
        printf("overflow");
        return;
    }
    else
    {
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("underflow");
        return;
    }
    else
    {
        top=top-1;
    }
}

void display()
{
    int i=top;
    printf("the stack is:\n");
    for(i=0; i<=top; i++)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}