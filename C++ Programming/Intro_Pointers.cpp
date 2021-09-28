#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int a,b=0;
    char c='a';
    a=10;
    cout<<"The address value of a is "<<&a<<endl;//this is the address value of a
    cout<<"The address value of b is "<<&b<<endl;//this is the address value of b
    cout<<"The address value of c is "<<&c<<endl;
    cout<<"*******************************************************"<<endl;

    int x=11;
    int *y,**z;
    y=&x;
    z=&y;
    cout<<"The Address value of x is "<<&x<<endl;    
    cout<<"The Address value of y is "<<&y<<endl;    
    cout<<"The Address value of z is "<<&z<<endl;

    cout<<"*******************************************************"<<endl;
    cout<<&x<<endl;
    cout<<&(*y)<<endl;//this is the address value of x using " &(*y) "
    cout<<&(**z)<<endl;//this is the address value of x using " &(**z) "
    cout<<"*******************************************************"<<endl;
    cout<<x<<endl;
    cout<<*y<<endl;//this is the value of x using " *y "
    cout<<**z<<endl;//this is the value of x using " **z "



}