#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i;
    printf("Enter the Number ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("Number is not prime");
            break;
        }
    }
    if(i==a)
    {
        printf("Number is Prime");
    }
    getch();
    return 0;
}