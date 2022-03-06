#include<iostream>
using namespace std;
class Nokia1
{
    public :
    /* using of this virtual keyword we creating lat binding between 
        parent fun1 and child fun1 thats why the fun1() is called by is p 
        if of Child class.*/
        virtual void fun1()      
        {
            cout<<"fun1 parent"<<endl;
        }
        /*Here is no use of virtual keyword thats why the fun2 is called by p
        of Parent class.*/
        void fun2()
        {
            cout<<"fun2 Parent"<<endl;
        }
};
class Nokia2 : public Nokia1
{
    public:
        void fun1()
        {
            cout<<"fun2 child"<<endl;
        }
        void fun2()
        {
            cout<<"fun2 Child"<<endl;
        }
};
int main()
{   
    Nokia1 a1, *p;
    Nokia2 a;
    p=&a;
    p->fun1();
    p->fun2();
    return 0;
}
