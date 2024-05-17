#include<stdio.h>


int stack[100],top,choice,n,x,i;
void push();
void pop();
void display();

int main()
{
    top=-1;
    printf("ENTER THE SIZE OF STACK[MAXSIZE=100]:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY\n");
    printf("------------------------------\n");
    printf("1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\n");
    do
    {
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
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
            printf("\nEXIT POINT....");
            break;
        default:
            printf("ENTER A VALID NUMBER (1/2/3/4)\n");

        }
    } while(choice!=4);
    return 0;
}

void push()
{
    if(top>=(n-1))
    {
        printf("STACK IS OVERFLOW \n");
    }
    else
    {
        printf("Enter a Value to Push:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("STACK IS UNDERFLOW \n");
    }
    else
    {
        printf("The Pop Element is %d\n",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {

        printf("THE STACK IS:\n");
        for(i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
        printf("\nPRESS THE NEXT CHOICE \n");
    }
    else
    {
     printf("THE STACK IS EMPTY \n");
    }
}