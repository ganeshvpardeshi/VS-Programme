#include<iostream>
using namespace std;
class Father 
{
    public :
    int a = 10, b = 12;
    
    void AFather()
    {
        cout<<"This is Father Function."<<endl;
    }
};
class Mother
{
    public :
    int c = 20, d = 21;
    
    void AMother()
    {
        cout<<"This is Mother Function."<<endl;
    }
};
class Chlid : public Father,Mother
{
    public:
    int e = 0, f = 0;

    void Addtion()
    {
        e = a + b;
        f = c + d;
    }
    void display()
    {
        cout<<"The Sum of Father's Features : "<<e<<",\nAnd The Sum of Mother's Features is : "<<f<<endl;
    }
};
int main()
{
    Chlid c;
    c.Addtion();
    c.display();
}