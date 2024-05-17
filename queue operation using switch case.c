#include<stdio.h>


int queue[5];
int front=-1;
int rear=-1;
int maxsize=10;
void enqueue();
void dequeue();
void display();


int main()
{
    int op;
    while(1)
    {
        printf("Operation in QUEUE\n------------\n");
        printf("1-Enqueue\n2-Dequeue\n3-display\n4-exit\n");
        printf("enter your choice:\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}

void enqueue()
{
    int item;
    printf("enter a item:\n");
    scanf("%d",&item);
    if((rear+1)%maxsize==front)
    {
        printf("overflow");
        return;
    }
    else if((front==-1) && (rear==-1))
    {
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else
    {
        rear=(rear+1) % maxsize;
        queue[rear]=item;
    }
}

void dequeue()
{
    if((front==-1)  && (rear==-1))
    {
        printf("underflow");
        return;
    }
    else if((front==rear))
    {
        rear=-1;
        front=-1;
    }
    else
    {
        front=(front+1) % maxsize;
    }
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("the que is empty\n");
    }
    else
    {
        printf("the queue is:\n");
        for(i=front; i<=rear; i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    }
}