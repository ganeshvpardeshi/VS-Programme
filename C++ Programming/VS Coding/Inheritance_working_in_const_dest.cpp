// using Single Inheritance checking flow of constructor(with default and parameterized) and destructor.  
#include<iostream>
using namespace std;
class Parent
{
    public :
    Parent()
    {
        cout<<"This is the Parent Default Constructor "<<endl;
        cout<<"\n";
    }
    Parent(int x)
    {
        cout<<"This is the Parent Parameterized Constructor "<<x<<endl;
        cout<<"\n";
    }
    ~Parent()
    {
        cout<<"this is the Parent Destructor"<<endl;
        cout<<"\n";
    }
};
class child : public Parent
{
    public :
    child() : Parent(2)
    {
        cout<<"This is the child Constructor"<<endl;
        cout<<"\n";
    }
    ~child()
    {
        cout<<"This is the child Destructor"<<endl;
        cout<<"\n";
    }
};
int main()
{
    child c;
}