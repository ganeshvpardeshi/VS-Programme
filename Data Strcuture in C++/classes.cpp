#include<iostream>
using namespace std;
class Example
{
    public :
    int x,y;
    void display()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    Example e;
    cout<<"Number 1st : ";
    cin>>e.x;
    cout<<"Number 2nd : ";
    cin>>e.y;
    
    e.display();
}