/*
Pattern Type :- 
*
**
***
****
*****
 */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
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
    return 0;
}