#include<iostream>
using namespace std;
class Contructor
{
    public :
    Contructor()
    {
        cout<<"Hii this is Ganesh in Contructor."<<endl;
    }
    ~Contructor()
    {
        cout<<"Hii this is Ganesh in Destuctor."<<endl;
    }
};
int main()
{
    Contructor c;
    cout<<"hello Ganesh"<<endl;
     
}