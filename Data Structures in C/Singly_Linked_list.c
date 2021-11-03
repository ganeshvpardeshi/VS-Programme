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
    display(head);
    return 0;
}