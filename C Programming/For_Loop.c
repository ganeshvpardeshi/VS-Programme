#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d = This is C Language And Hii Ganesh \n",i);
        count++;
    }
    printf("The Total number of exeutable for loop %d ",count);
    // printf("\n%d",i);
        getch();
}