#include<stdio.h>
#include<conio.h>
int main()
{
   long int i,n,sum = 1;
    
    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum =sum *i;
    }

    printf("The Factorial of %ld is %ld ",n,sum);

    getch();
    return 0;
}