#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Case 1 : inserting a Node in first position 
struct Node *insertInFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

//Case 1 : inserting a Node at index position 
struct Node *insertAtindex(struct Node *head, int data,int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));       
    struct Node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}

//Case 1 : inserting a Node in End position 
struct Node * insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data=data;
    while(p->next!=NULL)
    {   
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//Case 1 : inserting a Node after a node position 
struct Node * insertAfterNode(struct Node *head,struct Node *prevNode,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    
    ptr->next=prevNode->next;
    prevNode->next=ptr;

    return head;
};


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
    printf("before inserting node : \n");
    display(head);
    printf("\n\n");
    // head = insertAtindex(head,56,1);
    // head = insertInFirst(head, 56);
    // head = insertAtEnd(head,59);
    head = insertAfterNode(head,third,44);
    printf("after inserting node : \n");
    display(head);
    return 0;
}