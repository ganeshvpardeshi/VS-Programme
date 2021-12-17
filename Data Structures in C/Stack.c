#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int cap;
    int *arr;
};
int isEmpty(struct stack *st)
{
    if(st->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *st)
{
    if(st->cap-1==st->top)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *st)
{
    if(!isFull(st))
    {
        int data;
        st->top++;
        printf("\nEnter the data : ");
        scanf("%d",&data);
        st->arr[st->top]=data;
        printf("The Element is Pushed\n");
    }
    else
    {
        printf("Stack is Full, first remove elements from stack.\n");
    }
}
void pop(struct stack *st)
{        
    int data;
    if(!isEmpty(st))
    {
        data = st->arr[st->top];
        printf("Poped element is %d \n",data);
        st->top--;
    }
    else
    {
        printf("Stack is Empty, first push elements in stack.\n");
    }
}
void display(struct stack *st)
{
    int i;
        
    if(!isEmpty(st))
    {   
        printf("The Elements in Dustbin : \n");
        for(i=0;i<=st->top;i++)
        {
            printf("%d ",st->arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("There is no element to Display.\n");
    }

}
void main()
{
    int ch,size;
    printf("Enter the size of Dustbin : ");
    scanf("%d",&size);
    struct stack *st;
    st=(struct stack *)malloc(sizeof(struct stack));
    st->top=-1;
    st->cap=size;
    st->arr=(int*)calloc(st->cap,sizeof(int));
    
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. EXIT");
    
    while(1)
    {
        printf("\nEnter your choise : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push(st);
                break;
            }
            case 2:
            {
                pop(st);
                break;
            }
            case 3:
            {
                exit(0);
            }
            case 4:
            {
                display(st);
                break;
            }
            default :
            {
                printf("Wrong Input.");
            }
        }
    }
}