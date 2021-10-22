#include<stdio.h>
#include<conio.h>
int main()
{
    int n,l=0,r;
    int a[30],m,s;

    printf("Enter the Range : \n");
    scanf("%d",&n);
    printf("The %d Elements \n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element [%d] : ",i);
        scanf("%d",&a[i]);
    }

    r=n-1;

    printf("Enter a Number that you want to search : ");
    scanf("%d",&s);
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==s)
        {
            printf("The Number is found at %d Location. ",m+1);
            break;
        }
        else if (a[m]>=s)
        {
            r=m-1;
        }
        else if(a[m]<=s)
        {
            l=m+1;
        }
    }
    if(l>r)
    {
        printf("The Number is Not Found. ");
    }

    getch();
    return 0;
}
