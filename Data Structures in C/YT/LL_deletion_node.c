#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Case 1 delting first node
struct Node * deleteFirst(struct Node *head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//case 2 deleting index elements
struct Node * deleteAtIndex(struct Node *head, int index)
{
    struct Node * p = head;
    struct Node * q = head->next;

    for(int i=0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
//case 3 deleting last elements
struct Node * deleteAtlast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL)    
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
//case 4 deleting given value elements
struct Node * deleteAtValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link head to second nodes
    head->data = 7;
    head->next = second;

    // link second to third nodes
    second->data = 17;
    second->next = third;

    // link third to fourth nodes
    third->data = 22;
    third->next = fourth;

    // link fourth to NULL nodes
    fourth->data = 99;
    fourth->next = NULL;

    //calling display function
    printf("linked list before deletion \n");
    display(head);
    // head = deleteFirst(head);//for deleting element in first 
    // head = deleteAtIndex(head,2);
    // head = deleteAtlast(head);//for deleting element in first 
    head = deleteAtValue(head,22);//deleting the element that given value 
    printf("linked list after deletion \n");
    display(head);
    return 0;
}