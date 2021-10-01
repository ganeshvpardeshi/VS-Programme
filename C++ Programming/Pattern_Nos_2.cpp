/*
Patter Type :-
1
12
123
1234
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,p=1;
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
        p=1;
    }
    getch();
    return 0;
}