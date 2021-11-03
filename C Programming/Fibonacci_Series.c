#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,r,i;
    printf("Enter the Range :");
    scanf("%d",&r);
    printf("%d %d",a,b);
    for(i=0;i<r;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
}