/*
Pattern Type :- 
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)//1i
    {
        for(j=1;j<=4;j++)//1j
        {
           if(j>5-i)// the condition is important here 
            {
                cout<<" ";
            }
            else 
            {
                cout<<"*";
            }
        }
        for(j=1;j<=4;j++)//2j
        {
            if(j>=i)// the condition is important here 
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
     for(i=5;i<=8;i++)//2i
    {
        for(j=5;j<=8;j++)//3j
        {
            if(j<=i)// the condition is important here 
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        for(j=5;j<=8;j++)
        {
            
           if(j>=13-i)// the condition is important here 
            {
                cout<<"*";
            }
            else 
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    getch();
}
