#include <iostream>
#include <stdlib.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *start = NULL;
// class Linkedlist
// {
// public :
//     Linkedlist()
//     {
//         start=NULL;
//     }

//     ~Linkedlist(){};

//     void creatOne();
//     void display();

// }
// Linkedlist :: createOne()
// {
//     node *p =new node();
//     cout<<"Enter the data : ";
//     cin>>p->data;
//     p->next=NULL;
//     return p;
// }
class Linkedlist : public node
{
public:
    void createOne();
    void insertAtFirst();
};
node* Linkedlist :: createOne()
{
    node *p = new node;
    p = (node *)malloc(sizeof(node));
    cout << "Enter the data : ";
    cin >> p->data;
    p->next = NULL;
    start=p;
    // return start;
}
void Linkedlist :: insertAtFirst()
{
    node *q = new node;
    Linkedlist l;//= new Linkedlist();
    q = l.createOne();
    if (start == NULL)
    {
        start = q;
    }
    else
    {
        q->next = start;
        start = q;
        cout << "Node inserted successfully" << endl;
    }
}

int main()
{
    int ch;
    Linkedlist *l = new Linkedlist();
    while (1)
    {
        cout << "\n\nEnter Your Choise : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            l->insertAtFirst();
            break;
        }
        case 2:
        {
            // insertAtEnd();
            break;
        }
        case 3:
        {
            // insertAtMiddle();
            break;
        }
        case 4:
        {
            // deleteAtStart();
            break;
        }
        case 5:
        {
            //    deleteAtEnd();
            break;
        }
        case 6:
        {
            // deleteAtMiddle();
            break;
        }
        case 7:
        {
            //    display();
            break;
        }
        case 8:
        {
            exit(0);
        }
        case 9:
        {
            // insertAtIndex();
            break;
        }
        default:
        {
            printf("wrong input");
        }
        }
    }
}