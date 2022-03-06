#include<iostream>
using namespace std;
class example
{
    public:
    example()
    {
        cout<<"This is default contructor."<<endl;
    }
    example(int a)
    {
        cout<<"this is parameterized contrcutor and taking value "<<a<<endl;
    }
};
int main()
{
    example e;
    example e1(11);
}