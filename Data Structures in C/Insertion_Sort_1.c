#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp,n;
    int a[10];
    printf("Enter the Number Size of Array \n");
    scanf("%d",&n);
    printf("Enter the Elements in the Array: \n");
    for(i=0;i<n;i++)
    {
        printf("Array[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        // temp=a[i];

        // for(j=i-1;j>=0 && temp<a[j];j--)
        // {
        //     a[j+1]=a[j];
        // }
        temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }

    printf("\nSorted Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("Array[%d] : %d\n",i+1,a[i]);
    }
}