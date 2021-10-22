#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int a[7]={21 , 3, 5, 12, 11, 17, 26}; //Given Array n=7
    int n=7,temp=0;

    printf("The Unsotred Array is : \n");
    for(i=0;i<=n;i++) //printing the given unsorted array
    {
        printf("%d ",a[i]);
    }

    for(i = 0; i < n - 1; i++)   //sorting the array 
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp   =  a[j];
                a[j]   =  a[j+1];
                a[j+1] =  temp;
            }
        }
    }
    printf("\nSorted list in ascending order:\n");
    for(i = 0; i < n; i++) //printing the given sorted array
    {
        printf("%d ",a[i]);
    }

    getch();
    return 0;
}
