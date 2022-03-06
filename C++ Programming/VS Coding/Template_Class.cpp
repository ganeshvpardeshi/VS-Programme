#include<iostream>
using namespace std;
template<class A, class B>class Example
{
    B x,y,z;
    B sum;
    public :
        void setdata()
        {
            cout<<"Enter the 3 Number of any data : "<<endl;
            cin>>x>>y>>z;
        }
        void Sum()
        {
            sum = x + y + z;
        }
        void Display()
        {
            cout<<sum<<endl;
        }
};
int main()
{
    Example<int, double>e1;
    e1.setdata();
    e1.Sum();
    e1.Display();
}