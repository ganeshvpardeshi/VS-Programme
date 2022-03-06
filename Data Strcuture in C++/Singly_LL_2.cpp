#include <iostream>
using namespace std;
class node // Node Class
{
        //  Memebers of node
    public:
        int data;
        node *next;

        node()
        {
            data = 0;
            next = NULL;
        }
};

node *head = 0; // Initailzing head as Global pointer

class Singly_LL : public node // Singly Linked list Class
{
        //  Memebers of Singly_LL Class
    public:
        node *createOne();
        void insertAtfirst();
        void insertAtEnd();
        void insertByIndex();
        void insertByValue();
        void deleteAtfirst();
        void deleteAtEnd();
        void deleteByIndex();
        void deleteByValue();
        void reverse();
        void display();
};

node *Singly_LL ::createOne()
{
    node *n;
    n = (node *)malloc(sizeof(node));
    cout << "Enter the data : ";
    cin >> n->data;
    n->next = NULL;
    return n;
}
void Singly_LL ::insertAtfirst()
{
    node *p;
    p = createOne();
    if (head == 0)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
        cout << "Node is Inserted successfully." << endl;
    }
}
void Singly_LL ::insertAtEnd()
{
    node *a, *b;
    a = head;
    b = createOne();
    if (head == 0)
    {
        head = b;
    }
    else
    {
        while (a->next != NULL)
        {
            a = a->next;
        }
        a->next = b;
        cout << "Node Inserted Successfully at end." << endl;
    }
}
void Singly_LL :: insertByIndex()
{
    node *p,*q;
    int index,i=1;
    
    cout<<"Enter the Index to insert the Data(Starts from 1): ";
    cin>>index;

    if(head == NULL || index == 0)
    {
         cout<<"Sorry, cannot insert the data."<<endl;
    }
    else
    {
        p = head;
        q = createOne();
        while(i!=index-1)
        {
            p = p->next;
            i++;
        }
        q->next = p->next;
        p->next=q;
        cout<<"The Data is inserted successfully."<<endl;
    }
}
void Singly_LL :: insertByValue()
{
    node *p;
    node *q;
    int data;
    
    cout<<"Enter the data after you want to insert : ";
    cin>>data;

    if(head == NULL || data == 0)
    {
        cout<<"Sorry, There is no data to insert."<<endl;
    }
    else
    {
        q = createOne();
        p = head;
        while(p->data!=data)
        {
            p = p->next;
        }
        q->next = p->next;
        p->next = q;
        cout<<"Node is inserted successfully."<<endl;
    }
}
void Singly_LL ::deleteAtfirst()
{
    node *a;
    if (head == 0)
    {
        cout << "\nSorry, There is no data to delete." << endl;
    }
    else
    {
        a = head;
        cout << "\nThe Deleted Element is : " << a->data << endl;
        head = head->next;
        a->next = NULL;
        free(a);
    }
}
void Singly_LL ::deleteAtEnd()
{
    node *w, *e;
    if (head == 0)
    {
        cout << "\nSorry, There is no data to delete." << endl;
    }
    else
    {
        w = head;
        e = head->next;

        if (w->next == NULL)
        {
            head = NULL;
            free(w);
        }
        else
        {
            while (e->next != NULL)
            {
                w = w->next;
                e = e->next;
            }
            cout << "\nThe Deleted Element is : " << e->data << endl;
            w->next = NULL;
            free(e);
        }
    }
}
void Singly_LL :: deleteByIndex()
{
    node *p,*q;
    int index,i=1;
    
    cout<<"Enter the Index to insert the Data(Starts from 1): ";
    cin>>index;
    
    if(head == NULL || index == 0)
    {
        cout<<"Sorry, There is no data to delete."<<endl;
    }
    else
    {
        p = head;
        q = p->next;
        while(i!=index-1)
        {
           p = p->next;
           q = q->next;
           i++; 
        }
        cout<<"The Deleted Element is "<<q->data<<endl;
        p->next = q->next;
        q->next = NULL;
        free(q);

    }
}
void Singly_LL :: deleteByValue()
{
    node *p,*q;
    int data;

    cout<<"Enter the data value to delete : ";
    cin>>data;

    if(head == NULL || data == 0)
    {
        cout<< "Sorry, There is no data to delete."<<endl;
    }
    else
    {
        p = head;
        q = p->next;
        while(q->data!=data)
        {
            p = p->next;
            q = q->next;
        }
        cout<<"The Deleted Element is : "<<q->data<<endl;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
}
// void Singly_LL :: reverse()
// {
//     node *p,*q;
//     q =head;
//     while(q->next!=NULL)
//     {
//         q = q->next;
//     }
//     p = head;

//     while(p->next!=NULL)
//     {
        
//     }
// }
void Singly_LL ::display()
{
    node *q;
    q = head;
    int n = 1;
    if (head == 0)
    {
        cout << "\nSorry, There is no data to display." << endl;
    }
    else
    {
        cout<<"Id\tData"<<endl;
        while (q != NULL)
        {
            cout<<n<<"\t"<<q->data<<endl;
            q = q->next;
            n++;
        }
    }
}
int main()
{
    Singly_LL s1;

    int ch;

    while (1)
    {
        cout << "\nPress 1 : Insertion at First." << endl;
        cout << "Press 2 : Insertion at End." << endl;
        cout << "Press 3 : Insertion By Index." << endl;
        cout << "Press 4 : Insertion By Value." << endl;
        cout << "Press 5 : Deletion at First." << endl;
        cout << "Press 6 : Deletion at End." << endl;
        cout << "Press 7 : Deletion By Index." << endl;
        cout << "Press 8 : Deletion By Value." << endl;
        cout << "Press 9 : Display." << endl;
        cout << "Press 0 : Exit." << endl;

        cout << "\nEnter the your choise : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            s1.insertAtfirst();
            break;

        case 2:
            s1.insertAtEnd();
            break;

        case 3:
            s1.insertByIndex();
            break;

        case 4:
            s1.insertByValue();
            break;

        case 5:
            s1.deleteAtfirst();
            break;

        case 6:
            s1.deleteAtEnd();
            break;

        case 7:
            s1.deleteByIndex();
            break;
        
        case 8:
            s1.deleteByValue();
            break;
            
        case 9:
            s1.display();
            break;
        
        case 0:
            exit(0);

        default:
            cout << "Wrong Input." << endl;
            break;
        }
    }
} 