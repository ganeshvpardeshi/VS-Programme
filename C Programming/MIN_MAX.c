#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the 2 number ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("A is Greater than b");
    }
    else if(b>a)
    {
        printf("B is Greater than a");
    }
    else 
    {
        printf("Both are Equal");
    }

    int x,y,z;
    printf("\nEnter the 3 number ");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        printf("The X is Greater than Y and Z");
    }
    else if((y>x)&&(y>z))
    {
        printf("The Y is Greater than X and Z");
    }
    else if ((z>x)&&(z>y))
    {
        printf("The Z is Greater than X and Y");
    }
    else 
    {
        printf("All Values of X, Y, and Z are Equal");
    }
    getch();
}