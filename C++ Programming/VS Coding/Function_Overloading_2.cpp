#include<iostream>
using namespace std;
class example
{
    public :
    void add(int a)
    {
        cout<<"this is function having integer parameter "<<a<<endl;
        cout<<sizeof(int)<<endl;
    }
    void add(float a)
    {
        cout<<"this is function having float parameter "<<a<<endl;
        cout<<sizeof(float)<<endl;
    }
    void add(double a)
    {
        cout<<"this is function having double parameter "<<a<<endl;
        cout<<sizeof(double)<<endl;
    }
    void add(char a)
    {
        cout<<"this is function having character parameter "<<a<<endl;
        cout<<sizeof(char)<<endl;
    }
};
int main()
{
    example e;
    e.add(10);
    e.add(1.1);
    e.add(12.12);
    e.add('A');
}