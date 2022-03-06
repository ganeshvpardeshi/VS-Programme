#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[60],s,n;
    printf("Enter the Range of the Number : \n");
    scanf("%d",&n); //5
    printf("Enter the Elements in Array\n");
    for(i=0;i<n;i++)
    {
        printf("Number [%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the Number that you want to search : ");
    scanf("%d",&s); //element to be search.
    for(i=0;i<n;i++) //0 to 4
    {
        if(s==a[i])
        {
            printf("\nNumber   : %d ",s);
            printf("\nLocation : %d ",i+1);
            break;
        }
    }
    // when number is found then loop will break. i=1
    //i=5
    if(i==n) //1==5
    {
        printf("\nNumber is not found.");
        // goto x;
    }

    getch();
    return 0;
}