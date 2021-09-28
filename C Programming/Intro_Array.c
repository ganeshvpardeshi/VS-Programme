#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],i;
    float sum=0,avg=0;

    printf("Enter the Elments in Array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    avg=sum/5;
    printf("The Total marks are %.1f and The Average %.1f \n",sum,avg);

    getch();
    return 0;
}