#include<stdio.h>
# define MAX 20
void Bubble_sort(int a[MAX],int n);
void display(int a[MAX],int n);
int main()
{
    int a[MAX],n,i;

    printf("Enter the number in the array : ");
    scanf("%d",&n);
    printf("\nEnter the Elements : \n");
    for(i=0;i<n;i++)
    {
        printf("Array[%d] = ",i);
        scanf("%d",&a[i]);
    }
    Bubble_sort(a,n);
    display(a,i);
    return 0;
}
void Bubble_sort(int a[MAX],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void display(int a[MAX],int n)
{
    int i;
    printf("\nSorted Array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}