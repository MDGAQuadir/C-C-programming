#include<stdio.h>
void create();
void display();
int a[3];
void main()
{
    int opt;
    while(1)
    {
        printf("\nEnter option:\n");
        scanf("%d", &opt);
        switch(opt)
        {
        case 1:

            create();
            break;
        case 2:
            display();
            break;
        default:
            exit(0);
            break;
        }
    }
}
void create()
{
    printf("creating array\n");
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    int i;
    printf("Displaying array \n");
    for(i=0; i<3; i++)
    {
        printf("%d \t",a[i]);
    }
}