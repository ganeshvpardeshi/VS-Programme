#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("enter the number a :");
    scanf("%d",&a);
    printf("Enter the nnumber b :");
    scanf("%d",&b);
    printf("the number before swaping ...a is %d b is %d ",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nthe number after swaping ...a is %d b is %d ",a,b);    

    getch();
    return 0;

}