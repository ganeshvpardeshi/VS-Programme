#include<iostream>
using namespace std;
class Example
{
    public :
    int x;
    Example()
    {
        x=5;
    }
    Example(Example &s1)
    {
        s1.x++;
        ++s1.x;
    }
};
int main()
{
    Example a1;
    Example a4(a1);
    a1.x++;
    a4.x++;
    cout<<a1.x;
}