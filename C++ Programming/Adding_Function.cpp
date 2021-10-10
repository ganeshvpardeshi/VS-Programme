#include<iostream>
#include<conio.h>
using namespace std;
int add(int x, int y)  //formal parameters or arguments.It is call by value or pass by value 
{
    int z;
    z=x+y;
    cout<<"The Addition is "<<z<<endl;
    return z;
};
int sub(int p,int q)
{
    int r;
    r=p-q;
    cout<<"The Subtraction is "<<r<<endl;
    return r;
};
int mul(int m, int n)
{
    int l;
    l=m*n;
    cout<<"The Multiplication is "<<l<<endl;
    return l;
};
float div(float c, float d)
{
    float e;
    e=c/d;
    cout<<"The Division is "<<e<<endl;
    return e;
};
int main()
{
    int a,b;
    cout<<"Enter the 2 number "<<endl;
    cin>>a;
    cin>>b;

    div(a,b);
    add(a,b);
    sub(a,b);
    mul(a,b);

    getch(); 
}