#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n;
    int a[30][30],b[30][30],c[30][30];
    
    printf("Enter the size of row :");
    scanf("%d",&m);
    printf("Enter the size of column :");
    scanf("%d",&n);
    printf("Enter the 1st matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the 2nd matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The Addition of 2 Matices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}