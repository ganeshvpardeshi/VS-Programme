#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int id,age;
    char name[60];
    int std;
    student *next;
}student;
student *start=0;
student *CreateSt()
{
    student *p;
    p=(student *)malloc(sizeof(student));
    printf("Enter the following data : \n");
    printf("ID : ");
    scanf("%d",&p->id);
    printf("\nEnter the Name : ");
    scanf("%s",p->name);
    printf("\nEnter the Age : ");
    scanf("%d",&p->age);
    printf("\nEnter the your previous standard : ");
    scanf("%d",&p->std);
    p->next=NULL;
    return p;
}
student *AddSt()
{
    student *p;
    p=CreateSt();
    if(start==0)
    {
        start=p;
        printf("The Details of student are added successfully.");
    }
    else
    {
        
    }
}

void main()
{
    int ch;
    printf("1. Add new Student Details.\n");
    printf("2. Update existing Student Details.\n");
    printf("3. Remove existing Student Details.\n");
    printf("4. To Display the Records.\n");
    printf("5. To EXIT.\n");
    
    while(1)
    {
        printf("\nENter the Your Choise : ");
        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1:
            {
                AddSt();
                break;
            }
            case 2:
            {
                UpdateSt();
                break;
            }
            case 3:
            {
                RemoveSt();
                break;
            }
            case 4:
            {
                DisplaySt();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("You entered wrong input, please choose above this.\n");
            }
        }
    }
}