#include<stdio.h>
#include<stdio.h>
int main()
{
    int a[30];
    int i,n,j,min,m_index,temp;
    
    printf("Enter the Range : \n");
    scanf("%d",&n);
        
    printf("Enter the Array Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        m_index=i;

        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                m_index=j;
            }
        }
        //swaping
        temp=a[i];
        a[i]=a[m_index];
        a[m_index]=temp;
    }

    printf("Sorted Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}