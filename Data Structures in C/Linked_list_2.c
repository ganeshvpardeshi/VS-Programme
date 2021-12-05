#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *START = 0;
struct node *createOne()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &p->data);
    p->next = 0;
    return p;
}
struct node *insertAtStart()
{
    struct node *k;
    k = createOne();
    if (START == 0)
    {
        START = k;
    }
    else
    {
        k->next = START;
        START = k;
        printf("Node inserted successfully");
    }
}
struct node *insertAtEnd()
{
    struct node *d;
    struct node *ptr;
    d=createOne();
    ptr=START;
    if (START == 0)
    {
        START = d;
    }
    else
    {
        while(ptr->next!=0)
        {
            ptr=ptr->next;        
        }
        ptr->next=d;
    }
}
struct node *insertAtMiddle()
{
    int value;
    struct node *a,*b;

    printf("Enter a data value after that\n");
    printf("you want to delete a data.");
    scanf("%d",&value);

    a=START;
    b=createOne();
    while(a!=0)
    {
        if(a->data==value)
        {
            b->next=a->next;
            a->next=b;
            printf("Data is inserted at given position successfully.");
            break;
        }
        a=a->next;
    }
}
struct node *deleteAtStart()
{
    struct node *x;
    
    if(START==0)
    {
        printf("\nList is Empty, Insert Element first.");
    }
    else
    {
        x=START;
        START=START->next;
        x->next=0;
        free(x);
        printf("Node is deleted successfully.");
    }
}
struct node *deleteAtEnd()
{
    struct node *c,*y;
    
    if(START==0)
    {
        printf("\nList is Empty, Insert Element first.");
    }
    else
    {
        c=START;
        if(c->next==0)
        {
            START=0;
            free(c);
            printf("Node is deleted successfully.");
        }
        else
        {
            while(c->next->next!=0)
            {
                c=c->next;
            }
            y=c->next;
            c->next=0;
            free(y);
            printf("Node is deleted successfully.");
        }
    }
}
struct node *deleteAtMiddle()
{
    int value;
    struct node *a,*b;
    a=START;
    b=START->next;
    
    if(START->next==0)
    {
        START=0;
        free(a);
        printf("Node is deleted successfully, Now List is empty.");
    }
    else
    {
        printf("Enter a data value after that\n");
        printf("you want to delete a data.");
        scanf("%d",&value);

        while(a->data!=value)
        {
            a=a->next;
            b=b->next;
        }
        a->next=b->next;
        b->next=0;
        free(b);
        printf("The Node is deleted Successfully.");
    }
}
struct node *display()
{
    struct node *ptr;
    if(START==0)
    {
        printf("List is empty.");
    }
    else
    {
        ptr = START;
        while (ptr != 0)
        {
            printf("%d  ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void main()
{
    int ch;
    printf("\n******************MENU******************");
    printf("\n** Press 1, For Insertion at Start.   **");
    printf("\n** Press 2, For Insertion at End.     **");
    printf("\n** Press 3, For Insertion at Middle.  **");
    printf("\n** Press 4, For Deletion at Start.    **");
    printf("\n** Press 5, For Deletion at End.      **");
    printf("\n** Press 6, For Deletion at Middle.   **");
    printf("\n** Press 7, For Display.              **");
    printf("\n** Press 8, For Exit.                 **");
    printf("\n****************************************");

    while(1)
    {
        printf("\n\nEnter Your Choise : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            {
                insertAtStart();
                break;
            }
            case 2:
            {
                insertAtEnd();
                break;
            }
            case 3:
            {
                insertAtMiddle();
                break;
            }
            case 4:
            {
                deleteAtStart();
                break;
            }
            case 5:
            {
               deleteAtEnd(); 
                break;
            }
            case 6:
            {
                deleteAtMiddle();
                break;
            }
            case 7:
            {
               display(); 
                break;
            }
            case 8:
            {
                exit(0);
            }
            default:
            {
                printf("wrong input");
            }
        }
    }
    getch();
}