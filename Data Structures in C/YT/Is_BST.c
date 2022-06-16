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

int isBST(node *root)
{
    static node *prev = NULL;

    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->rigth);
    }
    else{
        return 1;
    }
}

int main()
{

    node *p1 = createNode(9);
    node *p2 = createNode(7);
    node *p3 = createNode(11);
    node *p4 = createNode(4);
    node *p5 = createNode(8);

    /* 
                9
               / \
              7   11
             / \
            4   8 

     */
    p1->left = p2;
    p1->rigth = p3;

    p2->left = p4;
    p2->rigth = p5;

   // preorder traversal
    printf("\nRepresentation of Data in PreOrder : \n");
    preOrder(p1);
   // postorder traversal
    printf("\nRepresentation of Data in PostOrder : \n");
    postOrder(p1);
   // inorder traversal
    printf("\nRepresentation of Data in InOrder : \n");
    InOrder(p1);
    // Is Binary Search Tree or NOT 
    int i = isBST(p1);
    if(i == 1)
    {
        printf("\n\nThis is Binary Search Tree.\n\n");
    }
    else{
        printf("\n\nThis is NOT Binary Search Tree.\n\n");
    }
}
