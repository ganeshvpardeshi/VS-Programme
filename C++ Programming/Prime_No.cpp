#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter the Number ";
    cin>>a;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"Number is not prime";
            break;
        }
    }
    if(i==a)
    {
        cout<<"Number is prime";
    }
    getch();
    return 0;
}