#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct x
{
    struct x *prev;
    int info;
    struct x *next;

};

struct x *start = NULL, *node;
int size;

void create (struct x *);
void traverse (struct x *);
void insertatfirst (struct x *);
void insertatend (struct x *);
void randominsert(struct x *);
void randominsertafter(struct x *);
void randominsertbefore(struct x *);
void search (struct x *);
void deleteatfirst (struct x *);
void deleteatlast (struct x *);
void randomdelete(struct x *);
void randomdeleteafter(struct x *);
void randomdeletebefore(struct x *);
void ascendingorder(struct x *);
void descendingorder(struct x *);
void reverse(struct x *);


int main ()
{
    int ch;
    struct x *ptr;
    do
    {
        printf ("\nDoubly linked list main  menu");
        printf ("\n________________________");
        printf ("\n1 - Create");
        printf ("\n2 - Traverse");
        printf ("\n3 - Insertatfirst");
        printf ("\n4 - Insertatlast");
        printf ("\n5 - Randominsert");
        printf ("\n6 - Randominsertafter");
        printf ("\n7 - Randominsertbefore");
        printf ("\n8 - Search");
        printf ("\n9 - Deleteatfirst");
        printf ("\n10 - Deleteatlast");
        printf ("\n11 - Randomdelete");
        printf ("\n12 - Randomdeleteafter");
        printf ("\n13 - Randomdeletebefore");
        printf ("\n14 - Ascendingorder");
        printf ("\n15 - Descendingorder");
        printf("\n16 - Reverse");
        printf ("\n17 - Exit");
        printf ("\nEnter your choice:");
        scanf ("%d", &ch);
        switch (ch)
        {
         case 1:
            create (start);
            break;
         case 2:
            traverse (start);
            break;
         case 3:
            insertatfirst (start);
            break;
         case 4:
            insertatend (start);
            break;
         case 5:
            randominsert(start);
            break;
         case 6:
            randominsertafter(start);
            break;
         case 7:
            randominsertbefore(start);
            break;
         case 8:
            search (start);
            break;
         case 9:
            deleteatfirst (start);
            break;
         case 10:
            deleteatlast (start);
            break;
         case 11:
            randomdelete(start);
            break;
         case 12:
            randomdeleteafter(start);
            break;
         case 13:
            randomdeletebefore(start);
            break;
         case 14:
            ascendingorder(start);
            break;
         case 15:
            descendingorder(start);
            break;
         case 16:
            reverse(start);
            break;
         case 17:
            printf ("EXIT POUINT.....");
            exit (0);
         default:
            printf ("ENTER A VALID NUMBER(1/2/3/4/5/6/7/8/9/10/11/12/13/14/15/16)");
        }
    }while (ch != 17);
}


//To create a doubly linked list.....
void create (struct x *ptr)
{
    int i = 1, data;
    printf ("Enter  the no of node:");
    scanf ("%d", &size);
    node = (struct x *) malloc (sizeof (struct x));
    printf ("Enter  the information:");
    scanf ("%d", &data);
    node->prev=NULL;
    node->info = data;
    node->next = NULL;
    start = node;
    while (i < size)
    {
        ptr = (struct x *) malloc (sizeof (struct x));
        printf ("Enter  the information:");
        scanf ("%d", &data);
        node->next=ptr;
        ptr->prev = node;
        node = node->next;
        node->info=data;
        i++;
    }
    node->next = NULL;
}


//To display a doubly linked list.....
void traverse (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        printf ("Data of doubly linked list is:\n");
        while (ptr != NULL)
        {
            printf ("%d\t", ptr->info);
            ptr = ptr->next;
        }
    }
}


//To insert a node at beginning of a doubly linked list.....
void insertatfirst (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        int item;
        struct x *newnode;
        newnode = (struct x *) malloc (sizeof (struct x));
        newnode->next = start;
        printf ("Enter a data for new node:");
        scanf ("%d", &item);
        newnode->info=item;  
        newnode->prev=NULL;  
        newnode->next = start;  
        start->prev=newnode;  
        start=newnode;  
        size++;
        printf("%d insert in first.",item);
    }
}


//To insert a node at end of a doubly linked list.....
void insertatend (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        int item;
        struct x *newnode;
        newnode = (struct x *) malloc (sizeof (struct x));
        printf ("Enter a data for new node:");
        scanf ("%d", &item);
        newnode->info=item;  
        ptr = start;  
        while(ptr->next!=NULL)  
        {  
            ptr = ptr->next;  
        }  
        ptr->next = newnode;  
        newnode ->prev=ptr;  
        newnode->next = NULL;  
        size++;
        printf("%d insert in last.",item);
    }
}


//To insert a node at  specified location of a doubly linked list.....
void randominsert(struct x *ptr)  
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        int i,loc,item;  
        struct x *newnode,*temp;
        newnode = (struct x *) malloc (sizeof (struct x));
        printf ("Enter a data for new node:");
        scanf ("%d", &item);
        newnode->info = item;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT INSERT FIRST NODE AND LAST NODE");
        printf("\nEnter the location  which you want to insert: ");  
        scanf("\n%d",&loc);  
        ptr=start;
        if(loc<=size&&loc>1)
        {
            for(i=1;i<loc;i++)  
            {  
                temp=ptr;
                ptr = ptr->next;  
            }
            temp->next = newnode;  
            newnode->prev=temp;
            newnode->next = ptr;
            ptr->prev=newnode;
            size++;
            printf("\n%d insert in location %d",item,i);  
        }
        else
        {
            printf("It can not insert.");
        }
    }
}  


//To insert a node at after specified location of a doubly linked list.....
void randominsertafter(struct x *ptr)  
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        int i,loc,item;  
        struct x *newnode,*temp;
        newnode = (struct x *) malloc (sizeof (struct x));
        printf ("Enter a data for new node:");
        scanf ("%d", &item);
        newnode->info = item;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT INSERT FIRST NODE AND LAST NODE");
        printf("\nEnter the location after which you want to insert: ");  
        scanf("\n%d",&loc);  
        ptr=start;
        if(loc<size&&loc>=1)
        {
            for(i=1;i<=loc;i++)  
            {  
                temp=ptr;
                ptr = ptr->next;  
            }
            temp->next = newnode;  
            newnode->prev=temp;
            newnode->next = ptr;
            ptr->prev=newnode;
            size++;
            printf("\n%d insert in location %d",item,i);  
        }
        else
        {
            printf("It can not insert.");
        }
    }
}  


//To insert a node at before specified location of a doubly linked list.....
void randominsertbefore(struct x *ptr)  
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        int i,loc,item;  
        struct x *newnode,*temp;
        newnode = (struct x *) malloc (sizeof (struct x));
        printf ("Enter a data for new node:");
        scanf ("%d", &item);
        newnode->info = item;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT INSERT FIRST NODE AND LAST NODE");
        printf("\nEnter the location before which you want to insert: ");  
        scanf("\n%d",&loc);  
        ptr=start;
        if(loc<=size&&loc>2)
        {
            for(i=1;i<loc-1;i++)  
            {  
                temp=ptr;
                ptr = ptr->next;  
            }
            temp->next = newnode;  
            newnode->prev=temp;
            newnode->next = ptr;
            ptr->prev=newnode;
            size++;
            printf("\n%d insert in location %d",item,i);  
        }
        else
        {
            printf("It can not insert.");
        }
    }
}  


//To search a node in a doubly linked list.....
void search (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
       ptr = start;
       int i=0, flag = 0, s;
       printf ("Enter the data of node to search:");
       scanf ("%d", &s);
       while (ptr != NULL)
       {
          if (ptr->info == s)
          {
              printf ("%d is found at %d",s,i+1);
              flag = 1;
              break;
            }
          else
          {
              ptr = ptr->next;
            }
          i++;
        }
       if (flag == 0)
       {
          printf ("The data of node doesnot exit.");
        }
    }
}


//To delete a node at beginning of a doubly linked list.....
void deleteatfirst (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else if(ptr->next==NULL)
    {
        printf("Only one node exist");
        start=NULL;
        free(ptr);
        printf ("\nOne and only node is deleted.");
    }
    else
    {
        ptr = start;
        start = start->next;
        start->prev=NULL;
        free (ptr);
        printf ("First node's data is deleted.");
        size--;
    }
}


//To delete a node at end of a doubly linked list.....
void deleteatlast (struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else if(ptr->next==NULL)
    {
        printf("Only one node exist.");
        start=NULL;
        free(ptr);
        printf ("\nOne and only node is deleted.");
    }
    else
    {
        ptr = start;
        struct x *temp;
        while (ptr->next != NULL)
        {
           temp = ptr;
           ptr = ptr->next;
        }
       temp->next = NULL;
       free (ptr);
       printf ("Last node is deleted.");
       size--;
    }
}


//To delete a node at  specified location of a doubly linked list.....
void randomdelete(struct x *ptr)
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        struct x *temp,*temp1;  
        int loc,i;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT DELETE FIRST NODE AND LAST NODE");
        printf("\nEnter the location of the node which you want to delete:");  
        scanf("%d",&loc);  
        temp=start;
        if(loc<size&&loc>1)
        {
          for(i=0;i<loc;i++)  
           {  
               temp1=ptr;
               ptr=temp;      
               temp = temp->next;  
            }
          temp1->next = ptr ->next;
          temp->prev=temp1;
          free(ptr);  
          size--;
          printf("\n%d location data is deleted",i);
        }
        else
        {
            printf("It can not delete");
        }
    }
}


//To delete a node at after specified location of a doubly linked list.....
void randomdeleteafter(struct x *ptr)
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        struct x *temp,*temp1;  
        int loc,i;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT DELETE FIRST NODE AND LAST NODE");
        printf("\nEnter the location of the node after which you want to delete:");  
        scanf("%d",&loc);  
        temp=start;
        if(loc<size-1&&loc>=1)
        {
          for(i=0;i<=loc;i++)  
           {  
               temp1=ptr;
               ptr=temp;      
               temp = temp->next;  
            }
          temp1->next = ptr ->next;
          temp->prev=temp1;
          free(ptr);  
          size--;
          printf("\n%d location data is deleted",i);
        }
        else
        {
            printf("It can not delete");
        }
    }
}


//To delete a node at before specified location of a doubly linked list.....
void randomdeletebefore(struct x *ptr)
{  
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        struct x *temp,*temp1;  
        int loc,i;
        printf("Right now,no of node is %d",size);
        printf("\nIN THIS FUNTION YOU CAN NOT DELETE FIRST NODE AND LAST NODE");
        printf("\nEnter the location of the node before which you want to delete:");  
        scanf("%d",&loc);  
        temp=start;
        if(loc<=size&&loc>2)
        {
          for(i=1;i<loc;i++)  
           {  
               temp1=ptr;
               ptr=temp;      
               temp = temp->next;  
            }
          temp1->next = ptr ->next;
          temp->prev=temp1;
          free(ptr);  
          size--;
          printf("\n%d location data is deleted",i-1);
        }
        else
        {
            printf("It can not delete");
        }
    }
}


//To display in ascending order a doubly linked list.....
void ascendingorder(struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        struct x *index=NULL;
        int temp;
        while (ptr != NULL)
        {
            index=ptr->next;
            while (index != NULL)
            {
                if(ptr->info > index->info)
                {
                    temp=ptr->info;
                    ptr->info=index->info;
                    index->info=temp;
                }
                index = index->next;
            }
            ptr = ptr->next;
        }
        ptr=start;
        printf ("Data of doubly linked list in ascending order is:\n");
        while (ptr != NULL)
        {
            printf ("%d\t", ptr->info);
            ptr = ptr->next;
        }
        
    }
}


//To display in descending order a doubly linked list.....
void descendingorder(struct x *ptr)
{
    if (ptr == NULL)
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else
    {
        struct x *index=NULL;
        int temp;
        while (ptr != NULL)
        {
            index=ptr->next;
            while (index != NULL)
            {
                if(ptr->info < index->info)
                {
                    temp=ptr->info;
                    ptr->info=index->info;
                    index->info=temp;
                }
                index = index->next;
            }
            ptr = ptr->next;
        }
        ptr=start;
        printf ("Data of doubly linked list in descending order is:\n");
        while (ptr != NULL)
        {
            printf ("%d\t", ptr->info);
            ptr = ptr->next;
        }
        
    }
}


//To display reverse of a doubly linked list.....
void reverse (struct x *ptr)
{
    if(ptr==NULL) 
    {
        printf ("Doubly linked list does not exit");
        return;
    }
    else 
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        printf ("Data of doubly linked list in reverse order is:\n");
        do
        {
            printf("%d\t",ptr->info);    
            ptr=ptr->prev;
        }while(ptr!=NULL);
        
    }
}