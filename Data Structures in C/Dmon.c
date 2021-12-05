struct node
{
    int data;
    struct node *next;
};
struct node *START=0;
createnode()
{
    struct node *cre;
    cre=START;
    cre=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data:=");
    scanf("%d",&cre->data);
    cre->next=0;
    return cre;
}
insertStart()
{
    struct node *star;
    star=createnode();
    if(START==0)
    {
        START=star;
    }
    else
    {
        star->next=START;
        START=star;
        printf("Node Inserted Sucessfully\n");
    }
}
insertEnd()
{
    struct node *D,*G;
    D=createnode();
    G=START;
    if(START==0)
    {
        START=D;
    }
    else
    {
        while(G->next!=0)
        {
            G=G->next;
        }
        G->next=D;
    }
}
insertMiddle()
{
    int deta;
    struct node *s,*e;
    s=createnode();

    printf("Enter the Data");
    scanf("%d",&deta);


}
deleteStart()
{

}
deleteEnd()
{

}
deleteMiddle()
{

}
Display()
{
    struct node *dis;
    dis=START;
    while(dis!=0)
    {
        printf("%d ",dis->data);
        dis=dis->next;
    } 
    printf("\n");   
}
void main()
{
    int ch;

    printf("1=Enter Data From Data\n");
    printf("2=Enter Data From End\n");
    printf("3=Enter Data From Middle\n");
    printf("4=Delete Data Fronm Start\n");
    printf("5=Delete Data From End\n");
    printf("6=Delte Data From Middle\n");
    printf("7=For Display Data");
    printf("8=For Exit\n");

    while(1)
    {
        printf("Enter Your Choice:=");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            {
                insertStart();
                break;
            }
            case 2:
            {
                insertEnd();
                break;
            }
            case 3:
            {
                insertMiddle();
                break;
            }
            case 4:
            {
                deleteStart();
                break;
            }
            case 5:
            {
                deleteEnd();
                break;
            }
            case 6:
            {
                deleteMiddle();
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
                printf("Wrong data Input\n");
            }   
        }
    }
}