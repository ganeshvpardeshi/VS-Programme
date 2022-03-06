#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int front,rear;
    int cap;
    int *arr;
};
struct Queue *Q;
void createQueue(int n)
{
    Q=(struct Queue *)malloc(sizeof(struct Queue));
    Q->rear=-1;
    Q->front=-1;
    Q->cap=n;
    Q->arr=(int *)calloc(Q->cap,sizeof(int));
}
int isEmpty()
{
    if(Q->front==-1)
    {
        return 1;
    }
    else   
    {
        return 0;
    }
}
int isFull()
{
    if((Q->rear+1)%Q->cap==Q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQueue()
{
    if(!isFull())
    {
        int data;
        Q->rear=Q->rear+1%Q->cap;
        printf("Enter the data : ");
        scanf("%d",&data);
        Q->arr[Q->rear]=data;
        if(Q->front==-1)
        {
            Q->front=Q->rear;
        }
    }
    else
    {
        printf("Queue is Overflowed.");
    }
 
}
void deQueue()
{

}
void deleteQueue()
{

}
void Queuesize()
{
    int s;
    s=(Q->cap-Q->front)+(Q->rear+1)%Q->cap;
    printf("Current size of queue is %d ",s);
}
void display()
{
   
    int ptr;
    ptr=Q->front;
    for(ptr=Q->front;ptr!=Q->rear;ptr++)
    {
        printf("%d  ",Q->arr[ptr]);
    }
        printf("%d  ",Q->arr[ptr]);
}
void main()
{
    int ch,n;

    printf("Enter the size of queue : ");
    scanf("%d",&n);
    createQueue(n);
    printf("\nPress 1. insertion in a queue.");
    printf("\nPress 2. deletion in a queue.");
    printf("\nPress 3. to display Queue.");
    printf("\nPress 4. if tou want to delete whole queue.");
    printf("\nPress 5. for the current size of queue.");
    printf("\nPress 6. EXIT.");
    while(1)
    {
        printf("\nEnter your choise : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                enQueue();
                break;
            }
            case 2:
            {
                deQueue();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                deleteQueue();
                break;
            }
            case 5:
            {
                Queuesize();
            }
            case 6:
            {
                exit(0);
            }
            default :
            {
                printf("Wrong Input.");
            }
        }
    }
}