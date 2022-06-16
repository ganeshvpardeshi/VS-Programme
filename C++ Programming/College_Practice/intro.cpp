#include<iostream>
using namespace std;
int x =20;
int main()
{
    int x =10;
    cout<<"Global x = "<<::x<<endl;
    cout<<"Local x = "<<x<<endl;
    {
        int x = 30;
        cout<<"Global x = "<<::x<<endl;
        cout<<"in nested block x = "<<x<<endl;
    }
}