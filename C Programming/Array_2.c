#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],i,n=0;
    float sum=0,avg=0;

    printf("Enter the Size of Array :\n");
    scanf("%d",&n);
    printf("Enter the Elements in Array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg=sum/n;
    printf("The Total marks are %.2f \nThe Average is %.2f \n",sum,avg);

    getch();
    return 0;
}