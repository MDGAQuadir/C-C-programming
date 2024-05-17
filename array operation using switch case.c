#include<stdio.h>
int Ar[100];
int size;
int UB=-1,LB=-1,MAXSIZE=10;
void create();
void display();
void search();
void insert();
void delete();
void main()
{
    char ch='y';
    int op;
    while(1)
    {
        printf("Operation in arrays\n_________ \n");
        printf("1-create\n2-display\n3-search\n");
        printf("4-insert\n5-delete\n6-exit\n");
        printf("enter your choice:\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            insert();
            break;
        case 5:
            delete();
            break;
        case 6:
            exit(0);

        }
    }
}
void create()
{
    int i;
    printf("enter the size:\n");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("enter element:\n");
        scanf("%d",&Ar[i]);
        UB=size-1;
    }
}
void display()
{
    int i;
    printf("the array is:\n");
    for(i=0; i<=UB; i++)
    {
        printf("%d\t",Ar[i]);
    }
    printf("\n");
}
void search()
{
    int i;
    int flag=0,b;
    printf("enter the element to search:\n");
    scanf("%d",&b);
    for(i=0; i<size; i++)
    {
        if (Ar[i]==b)
        {
            printf("the element is found at %d\n",i+1);
            flag=1;
            break;
        }
        else
        {

            continue;
        }
    }
    if(flag==0)
    {
        printf("the element doesnot exit.\n");
    }
}
void insert()
{
    int item;
    printf("enter new element:\n");
    scanf("%d",&item);
    if(UB==(MAXSIZE-1))
    {
        printf("overflow");
        return;
    }
    else if(LB==-1 && UB==-1)
    {
        LB=0;
        UB=0;
        Ar[UB]=item;
    }
    else
    {
        UB=UB+1;
        Ar[UB]=item;
    }
}
void delete()
{
    if(LB==-1 && UB==-1)
    {
        printf("underflow");
        return;
    }
    else if(LB==0 && UB==0)
    {
        UB=-1;
        LB=-1;
    }
    else
    {
        UB=UB-1;
    }

}