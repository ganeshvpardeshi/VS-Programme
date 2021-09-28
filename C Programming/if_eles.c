#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    if(a<10)
    {
        printf("A is not grater than 10 ");
    }
    else if(a<50)
    {
        printf("A is not greater than 50");
    }
    else {
        printf("A is greater than 100");
    }
    getch();
}