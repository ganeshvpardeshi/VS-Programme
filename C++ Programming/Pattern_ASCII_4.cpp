/*
Patter Type :-
A   
BC  
DEF 
GHIJ
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;
    char p=65;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j<=i)
            {
                cout<<p;
                p++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    getch();
    return 0;
}