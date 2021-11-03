#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout<<"Enter the number = ";
    cin>>n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout<<"palindrome number ";
    }
    else
    {
        cout<<"Number is not palindrome";
    }
    return 0;
}