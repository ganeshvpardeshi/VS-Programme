#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"Enter the Raneg to Print the Prime Number : ";
    cin>>r;
    cout<<"Prime is from 1 to "<<r<<endl;
    for(j=2;j<r;j++)
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
    getch();
    return 0;
}