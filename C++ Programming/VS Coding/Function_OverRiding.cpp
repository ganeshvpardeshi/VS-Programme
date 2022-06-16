#include<iostream>
using namespace std;
class Example
{
    public:
    void function()
    {
        cout<<"this function is from parent class."<<endl;
    }
};
class Example1 : public Example
{
    public:
    void function()
    {
        cout<<"this function is from child class."<<endl;
    }
};
int main()
{
    Example1  e;
    e.function();
}