#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left,*rigth;
}node;


node *createNode(int data)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data = data;
    p->left = NULL;
    p->rigth = NULL;
    return p;
}

// root -> left tree -> rigth tree
void preOrder(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->rigth);
    }
}
// left tree -> rigth tree -> root 
void postOrder(node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->rigth);
        printf("%d ",root->data);
    }
}
// left tree -> root -> rigth tree  
void InOrder(node *root)
{
    if(root!=NULL)
    {
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->rigth);
    }
}
int main()
{

    node *p1 = createNode(1);
    node *p2 = createNode(2);
    node *p3 = createNode(3);
    node *p4 = createNode(4);
    node *p5 = createNode(5);
    node *p6 = createNode(6);
    node *p7 = createNode(7);
    node *p8 = createNode(8);
    node *p9 = createNode(9);
    node *p10 = createNode(10);
    node *p11 = createNode(11);

    p1->left = p2;
    p1->rigth = p3;

    p2->left = p4;
    p2->rigth = p5;

    p3->left = p6;
    p3->rigth = p7;

    p4->left = p8;

    p5->left = p9;
     
    p6->left = p10;

    p7->left = p11;

   // preorder traversal
    printf("\nRepresentation of Data in PreOrder : \n");
    preOrder(p1);
   // postorder traversal
    printf("\nRepresentation of Data in PostOrder : \n");
    postOrder(p1);
   // inorder traversal
    printf("\nRepresentation of Data in InOrder : \n");
    InOrder(p1);
}
