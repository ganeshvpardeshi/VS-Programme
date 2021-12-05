#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,l;
    char a[10],temp;
    cout<<"Enter a string ";
    cin>>a;
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-i-1])
        {
            cout<<"Not a Palindrome."<<endl;
            break;
        }
    }
    if(i==l/2)
    {
        cout<<"It is a Palindrome."<<endl;
    }
    getch();
}