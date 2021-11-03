//reverse the string without using any string in-built functions
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,l;
    char a[20],temp;
    cout<<"Enter a string to reverse it.:\n";
    // cin>>a;
    gets(a);
    //length of the string 
    l=strlen(a);

    for(i=0;i<l/2;i++)
    {
        //swaping
        temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    }
    // cout<<a;
    puts(a);
    getch();
}