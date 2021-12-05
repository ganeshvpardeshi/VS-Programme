#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *START=0;
struct node *CreateOne()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the Data : ");
    scanf("%d",&p->data);
    p->prev=p->next=0;
    return p;
}
struct node *InsertAtStart()
{
    struct node *a;
    a=CreateOne();
    if(START==0)
    {
        START=a;
        printf("Node is Inserted Successfully.");
    }
    else
    {
        START->prev=a;
        a->next=START;
        START=a;
        printf("Node is Inserted Successfully.");
    }
}
struct node InsertAtEnd()
{
    struct node *b,*c;
    b=CreateOne();
    if(START==0)
    {
        START=b;
        printf("Node is Inserted Successfully at end.");
    }
    else
    {
        c=START;
        while(c->next!=0)
        {
            c=c->next;
        }
        c->next=b;
        b->prev=c;
        printf("Node is Inserted Successfully at end.");
    }

}
struct node *InsertAtMiddle()
{
    struct node *d,*e,*f;
    int value;
    d=START;
    f=START->next;

    if(START==0)
    {
        printf("Insert Node First.");
    }
    else
    {
        printf("Enter a data value after that\n");
        printf("you want to insert a data.");    
        scanf("%d",&value);
        e=CreateOne();
        while(d->data!=value)
        {
            d=d->next;
            f=f->next;
        }
        d->next=e;
        e->prev=d;
        e->next=f;
        f->prev=e;
        printf("Node is Inserted Successfully.");
    }
}
struct node *DeleteAtStart()
{
    struct node *g;
    g=START;
    if(START->next==0)
    {
        START=0;
        free(g);
        printf("Now the Node is Empty,Insert first.");
    }
    else
    {
        START=START->next;
        START->prev=0;
        g->next=0;
        free(g); 
        printf("The Node is Deleted Successfully.");  
    }
}
struct node *DeleteAtEnd()
{
    struct node *h,*i;
    h=START;
    i=START->next;
    if(START->next==0)
    {
        START=0;
        free(h);
        printf("List is empty");
    }
    else
    {
        while(i->next!=0)
        {
            h=h->next;
            i=i->next;
        }
        i->prev=0;
        h->next=0;
        free(i);
        printf("The Node is deleted Successfully");
    }
}
struct node *DeleteAtMiddle()
{
    struct node *j,*k;
    int value;
    j=START;
    k=START->next;
    
    if(START->next==0)
    {
        START=0;
        free(j);
        printf("Node is deleted successfully, Now List is empty.");
    }
    else
    {
        printf("Enter a data value after that\n");
        printf("you want to delete a data.");
        scanf("%d",&value);

        while(j->data!=value)
        {
            j=j->next;
            k=k->next;
        }
        j->next=k->next;
        k->next->prev=j;
        k->next=0;
        free(k);
        printf("The Node is deleted Successfully.");
    }
}
struct node *Display()
{
    struct node *p;
    p=START;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
}
void main()
{
    int val;
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
        scanf("%d",&val);
        switch (val)
        {
            case 1:
            {
                InsertAtStart();
                break;
            }
            case 2:
            {
                InsertAtEnd();
                break;
            }
            case 3:
            {
                InsertAtMiddle();
                break;
            }
            case 4:
            {
                DeleteAtStart();
                break;
            }
            case 5:
            {
                DeleteAtEnd(); 
                break;
            }
            case 6:
            {
                DeleteAtMiddle();
                break;
            }
            case 7:
            {
                Display(); 
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