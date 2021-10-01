#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,m,n;
    int a[30][30],b[30][30],c[30][30];

    cout<<"Enter the size of row : ";
    cin>>m;
    cout<<"Enter the size of column : ";
    cin>>n;

    cout<<"Enter the 1st Matrix : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the 2nd Matrix : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Enter the 1st Matrix : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }    
}