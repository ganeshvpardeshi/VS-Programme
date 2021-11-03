/*write a program to measure the length of the 
string without using string function*/ 
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n;
    char a[20];
    cout<<"Enter a String to measure the length : "<<endl;
    // cin>>a;
    gets(a);//this function is use for string opreation 
    for(i=0;a[i]!='\0';i++);
    cout<<i;
    
}