#include<iostream>
using namespace std;
class node                      //  Class Node.
{
    public :
        int data;
        node *next;
        node *prev;

    node()                     //   Node Constructor.
    {
        data=0;
        next=prev=NULL;
    }
};

node *head = NULL;              //  head as Global pointer. 

class Doubly_LL : public node   //  LinkedList Class.
{
    public :                    // The Memebrs of LinkeList Class.
        node* createOne();
        void insertAtfirst();
        void insertAtEnd();
        void insertAtIndex();
        void deleteAtfirst();
        void deleteAtEnd();
        void deleteByIndex();
        void display();
};

node* Doubly_LL :: createOne()
{
    node *p;
    p=(node *)malloc(sizeof(node));
    cout<<"Enter the Data : ";
    cin>>p->data;
    p->next=p->prev=NULL;
    return p;
}
void Doubly_LL :: insertAtfirst()
{
    node *n;
    n = createOne();
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        head->prev = n;
        n->next = head;
        head = n;
        cout<<"The Node is Inserted at Start."<<endl;
    }
}
void Doubly_LL :: insertAtEnd()
{
    node *k,*m;
    k=createOne();
    
    if(head == NULL)
    {
        head = k;
    }
    else{
        m=head;
        while(m->next!=NULL)
        {
            m = m->next;
        }
        m->next=k;
        k->prev=m;
        cout<<"The Node is Inserted At End Successfully."<<endl;
    }
}
void Doubly_LL :: insertAtIndex()
{
    node *p,*q;
    p = head;
    int index,i=1;
    if(head == NULL)
    {
        head = q;
    }
    else
    {
        cout<<"Enter the Index Number to insert the data : ";
        cin>>index;
        q = createOne();
        while(i!=index-1)
        {
            p = p->next;
            i++;
        }
        q->next=p->next;
        p->next->prev=q;
        q->prev=p;
        p->next=q;
    }
}
void Doubly_LL :: deleteAtfirst()
{
    node *n;
    if(head == NULL)
    {
        cout<<"sorry, There is no data to delete."<<endl;
    }
    else{
        n=head;
        cout<<"The Deleted Element is "<<n->data<<endl;
        head = head->next;
        head->prev=NULL;
        n->next = NULL;
        free(n);
    }
}
void Doubly_LL :: deleteAtEnd()
{
    node *u,*j;
    
    u=head;
    j=head->next;
    
    if(head == NULL)
    {
        cout<<"Sorry, There is not data to delete."<<endl;
    }
    else
    {
      
        if(head->next == NULL)
        {
            head = NULL;
            cout<<"The Deleted Element is "<<u->data;
            free(u);
        }
        else
        {
            while(j->next!=NULL)
            {
                u = u->next;
                j = j->next;
            }
            cout<<"The Deleted Element is "<<j->data<<endl;
            j->prev = NULL;
            u->next = NULL;
            free(j);
        }
    }
}
void Doubly_LL :: deleteByIndex()
{
    int index;
    int i=1;
    node *t;
    
    t=head;

    if(head == NULL)
    {
        cout<<"Sorry, There is no data to delete."<<endl;
    }
    else
    {
        cout<<"Enter the a Index to delete the Element (Starts from 1): ";
        cin>>index;

        while(i<index)
        {
            t = t->next;
            i++;
        }
        cout<<"\nThe Deleted Element is "<<t->data<<endl;

        t->prev->next=t->next;
        t->next->prev=t->prev;
        t->next=NULL;
        t->prev=NULL;
        free(t);
    }
}
void Doubly_LL :: display()
{
    node *i;
    i=head;
    int n=1;
    if(head == NULL)
    {
        cout<<"\nSorry, There is no Element to display."<<endl;
    }
    else{
        cout<<"Id\tData"<<endl;
        while(i!=NULL)
        {
            cout<<n<<"\t"<<i->data<<endl;
            i = i->next;
            n++;
        }
    }
}
int main()
{
    
    Doubly_LL d;

    int ch;
    while (1)
    {
        cout << "\nPress 1 : Insertion at First." << endl;
        cout << "Press 2 : Insertion at End." << endl;
        cout << "Press 3 : Insertion By Index." << endl;
        cout << "Press 4 : Deletion at First." << endl;
        cout << "Press 5 : Deletion at End." <<endl;
        cout << "Press 6 : Deletion By Index." << endl;
        cout << "Press 7 : Display." << endl;
        cout << "Press 8 : Exit." <<endl;

        cout << "\nEnter the your choise : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            d.insertAtfirst();
            break;

        case 2:
            d.insertAtEnd();
            break;

        case 3:
            d.insertAtIndex();
            break;

        case 4:
            d.deleteAtfirst();
            break;

        case 5:
            d.deleteAtEnd();
            break;

        case 6:
            d.deleteByIndex();
            break;

        case 7:
            d.display();
            break;

        case 8:
            exit(0);

        default:
            cout << "Wrong Input." << endl;
            break;
        }
    }
}
