#include<iostream>
using namespace std;
class Hii
{
    public :    // Access Specifier
    void func2()
    {
        cout<<"This is class's Function or class's Method."<<endl;
    }    
};
void func1()
{
    cout<<"This is Independent or Global Function."<<endl;
}
int main()
{
    func1();

    Hii h;      // Object Declaration
    h.func2();

}