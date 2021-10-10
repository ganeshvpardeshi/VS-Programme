#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum = 1;
    
    cout<<"Enter the Number : "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum = sum *i;
    }

    cout<<"The Factorial of "<<n<<endl;
    cout<<sum;

    getch();
    return 0;
}