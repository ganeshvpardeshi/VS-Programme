#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the 2 Number : "<<endl;
    cin>>a;
    cin>>b;
    if(a>b)
    {
        cout<<"The Value of A is Greater than B "<<endl;
    }
    else if(b>a)
    {
        cout<<"The Value of B is Greater than A "<<endl;
    }
    else 
    {
        cout<<"Both Values are Equal"<<endl;
    }

    int x,y,z;
    cout<<"Enter the 3 Number : "<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    if((x>y)&&(x>z))
    {
        cout<<"The Value of X is Greater than Y and Z "<<endl;
    }
    else if((y>z)&&(y>x))
    {
        cout<<"The Value of Y is Greater than X and Z "<<endl;
    }
    else if((z>x)&&(z>y))
    {
        cout<<"The Value of Z is Greater than X and Y "<<endl;
    }
    else 
    {
        cout<<"All Values are Equal "<<endl;
    }

    return 0;
    getch();

}