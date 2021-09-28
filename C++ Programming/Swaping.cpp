#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the Value of A "<<endl;
    cin>>a;
    cout<<"Enter the Value Of B "<<endl;
    cin>>b;

    cout<<"Before Swaping Values are A = "<<a<<" and B = "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;

    cout<<"After Swaping Values are A = "<<a<<" and B = "<<b<<endl;

    getch();
    return 0;
}