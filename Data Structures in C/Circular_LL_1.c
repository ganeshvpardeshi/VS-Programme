#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *start=0;
struct node *CreateOne()
{
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Data :- ");
    scanf("%d",&p->data);
    p->next=p;
    return p;
}
struct node *InsertAtStart()
{
    struct node *a,*b;
    a=CreateOne();
    b=start;
    if(start==0)
    {
        start=a;
        printf("The Node is Inserted Successfully.");
    }
    else
    {
        a->next=start;
        while(b->next!=start)
        {
            b=b->next;
        }
        b->next=a;
        start=a;
        printf("Node is Inserted Successfully");
    }
}
struct node *InsertAtEnd()
{
    
}
struct node *InsertAtMiddle()
{

}
struct node *DeleteAtStart()
{

}
struct node *DeleteAtEnd()
{

}
struct node *DeleteAtMiddle()
{

}
struct node *Display()
{
    struct node *p;
    p=start;
    while(p->next!=start)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("%d",p->data);
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
                // InsertAtEnd();
                break;
            }
            case 3:
            {
                // InsertAtMiddle();
                break;
            }
            case 4:
            {
                // DeleteAtStart();
                break;
            }
            case 5:
            {
                // DeleteAtEnd(); 
                break;
            }
            case 6:
            {
                // DeleteAtMiddle();
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