#include<stdio.h>
#include<stdlib.h>
struct X
{
    char name[30];
    char code[10];
    int age;
    float sal;
} emp[10];
void main ()
{
    int i;
    for(i=0; i<10; i++)
    {   
        printf("enter employee name:");
        gets(emp[i].name);
        fflush(stdin);
        printf("enter employee code:");
        gets(emp[i].code);
        fflush(stdin);
        printf("enter employee age:");
        scanf("%d",&emp[i].age);
        printf("enter employee salary:");
        scanf("%f",&emp[i].sal);
        
    }
    for(i=0; i<10; i++)
    {
        if(emp[i].age>40)
        {
            printf("employee name is %s and salary is %f",emp[i].name,emp[i].sal);
        }
    }
}