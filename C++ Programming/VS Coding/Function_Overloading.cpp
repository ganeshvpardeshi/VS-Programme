#include<iostream>
using namespace std;
class A
{
    public :
    void add()
    {
        cout<<"This is Function 1st."<<endl;
    }
    void add(int a)
    {
        cout<<"This is Function 2nd taking parameter "<<a<<endl;
    }
};
int main()
{
    A a;
    a.add();
    a.add(11);

}