#include<stdio.h>
#include<conio.h>
# define MAX 20
void insertion_sort(int a[MAX], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;(j>=0) && (temp<a[j]);j--)
                a[j+1]=a[j];
                a[j+1]=temp;
        
    }
}
void main()
{
    int a[MAX],i,n;
    printf("How much size of array do you want : ");
    scanf("%d",&n);
    printf("Enter the Elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insertion_sort(a,n);
 
    printf("\nElemets after sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}