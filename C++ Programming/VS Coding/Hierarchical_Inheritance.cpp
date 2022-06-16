#include<iostream>
using namespace std;
class parent{
    public :

        void function_1()
        {
            cout<<"\tThis is First Function of Parent Class."<<endl;
        }
        void function_2()
        {
            cout<<"\tThis is Second Function of Parent Class."<<endl;
        }
};
class chlid_1 : public parent
{
    public:

        chlid_1()
        {
            cout<<"\nFollowing Function called by the First Child."<<endl;
            function_1();
        }
};
class chlid_2 : public parent
{
    public:

        chlid_2()
        {
            cout<<"\n\nFollowing Function called by the Second Child."<<endl;
            function_2();
        }
};
int main()
{
    chlid_1 c1;
    chlid_2 c2;
}