#include<iostream>
using namespace std;
class Nokia1
{
    public :
        virtual void fun1() = 0;    /** this pure virtual function, 
          using this we can make abstract class.
          the abstract class cannot make its own object
          we need to override that pure virtual function.
        */
        void fun2()
        {
            cout<<"fun2() Parent"<<endl;
        }
};
class Nokia2 : public Nokia1
{
    public:
    /**  To OverRide the parent's pure virtual function we need make 
        same function in child class then, we can create the child's object.
    
    */
    void fun1()     //Overriding the Parent's pure virtual function
    {
        cout<<"fun1() Child"<<endl;
    }
};
int main()
{
    Nokia2 a;
    a.fun1();
    a.fun2();
    return 0;
}