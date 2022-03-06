#include<iostream>
using namespace std;
class Example
{
    public :
    void add(int x,int y)
    {
        int z=x+y;
        cout<<"The Addition is "<<z<<endl;
    }
};
class Operation : public Example
{
    public :
    int a,b;
    void get_input()
    {
        cout<<"Enter the value of a : "<<endl;
        cin>>a;
        cout<<"Enter the value of b : "<<endl;
        cin>>b;
        add(a,b);
    }
};
int main()
{
    Operation op;
    op.get_input();
}