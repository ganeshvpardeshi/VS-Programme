#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n;
    int a[30][30],b[30][30];
    int c[30][30];//Addition
    int d[30][30];//Subtraction
    int e[30][30];//Multiplication
    float f[30][30];//Division

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
    //Addition
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //Subtraction
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    //Multiplication
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            e[i][j]=a[i][j]*b[i][j];
        }
    }
    //Division
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            f[i][j]=(float)a[i][j]/(float)b[i][j];
        }
    }
    //Printing Addtion 
    printf("The Addition of 2 Matices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    //Printing Subtraction
    printf("The Subtraction of 2 Matices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",d[i][j]);
        }
        printf("\n");
    }
    //Printing Multiplication
    printf("The Multiplication of 2 Matices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",e[i][j]);
        }
        printf("\n");
    }
    //Printing Division
    printf("The Division of 2 Matices is : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %1.f ",f[i][j]);
        }
        printf("\n");
    }
    return 0;
}