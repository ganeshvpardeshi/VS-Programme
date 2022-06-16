#include<stdio.h>
int main()
{
    int i,j,r;
    printf("Enter the Raneg to Print the Prime Number : ");
    scanf("%d",&r);
    printf("Prime is from 1 to %d is : \n",r);
    for(j=2;j<=r;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",i);
        }
    }
    return 0;   
}