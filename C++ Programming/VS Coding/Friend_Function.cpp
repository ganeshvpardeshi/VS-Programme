#include<iostream>
using namespace std;
class Complex
{
    int a,b;

    public :
        void setdata(int q, int p)
        {
            a = q;
            b = p;
        }

        friend Complex sumComplex(Complex u1, Complex u2);

        void printNumber()
        {
            cout<<"The Complex Number is "<<a<<"+"<<b<<"i"<<endl;
        }
        void printSum()
        {
            cout<<"The Sum of Above Complex Number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex u1, Complex u2)
{
    Complex k1;
    // k1.setdata((u1.a + u2.a),(u1.b + u2.b));
    k1.a = u1.a + u2.a;
    k1.b = u1.b + u2.b;
    return k1;
};
int main()
{
    Complex c1,c2,sum;
    c1.setdata(1,5);
    c1.printNumber();

    c2.setdata(2,3);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printSum();   
}