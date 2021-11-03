#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=0,b=1,c,r,i;
    cout<<"Enter the Range :";
    cin>>r;
    cout<<a;
    cout<<" "<<b;
    for(i=0;i<r;i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
}