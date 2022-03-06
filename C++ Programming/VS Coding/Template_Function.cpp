#include<iostream>
#include<stdlib.h>
using namespace std;
//  using Template we can do all operation on the any datatype
template<class A>A function(A x,A y,A z)
{
    A sum;
    sum = x + y + z;
    cout<<sum<<endl;
}
int main()
{
    function(44.2,5.2,65.2);
    function(5,5,5);
}
