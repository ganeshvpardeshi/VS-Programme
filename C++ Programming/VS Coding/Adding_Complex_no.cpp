#include<iostream>
using namespace std;
class Complex
{
    int x,y;  //x,y are private members of Complex class
    public :

        void setdata(int p,int q)
        {
            x=p;
            y=q;
        }
        Complex add(Complex u1)
        {
            Complex k1;
            k1.x=u1.x+x;
            k1.y=u1.y+y;
            return k1;
        }
        void display()
        {
            cout<<x<<"+"<<y<<"i"<<endl;
        }
};
int main()
{
    int a,b;

    Complex a1,a2,a3;

    cout<<"Enter the data for 1st Object : "<<endl;
    cin>>a>>b;
    a1.setdata(a,b);

    a=b=0;

    cout<<"Enter the data for 2nd Object : "<<endl;
    cin>>a>>b;
    a2.setdata(a,b);

    a3=a1.add(a2);
    a3.display();
}