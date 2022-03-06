#include<iostream>
using namespace std;
class complex
{
    int x,y;
    public :
    void setdata(int p,int q)
    {
        x=p;
        y=q;
    }
    complex operator +(complex u1)
    {
        complex k1;
        k1.x=u1.x+x;
        k1.y=u1.y+y;
        return k1;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }  
};
int main()
{
    int a,b;

    complex a1,a2,a3;

    cout<<"Enter the data for 1st object : "<<endl;
    cin>>a>>b;
    a1.setdata(a,b);

    a=b=0;

    cout<<"Enter the data for 2nd Object : "<<endl;
    cin>>a>>b;
    a2.setdata(a,b);

    // a3=a1.operator+(a2);
    a3=a1+a2;

    a3.display();
}