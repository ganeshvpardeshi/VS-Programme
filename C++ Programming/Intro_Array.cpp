#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[50], i, n;
    float sum=0, avg=0;
    cout<<"Enter the Size of Array : "<<endl;
    cin>>n;
    cout<<"Enter the Elements in the Array :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg = sum /n;
    cout<<"The Total Marks are "<<sum<<endl;
    cout<<"The Average is "<<avg<<endl;
}