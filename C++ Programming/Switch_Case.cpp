#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,ch;
    cout<<"Press 1. for Addition ";
    cout<<"\nPress 2. for Subtraction ";
    cout<<"\nPress 3. for Multiplicatio ";
    cout<<"\nPress 4. for Division ";
    x: cout<<"\nEnter your Choise : ";//the line number 55 is comes here 
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            cout<<"Enter the 2 Number \n";
            cin>>a;
            cin>>b;
            c=a+b;
            cout<<"The Addition is : "<<c;
            break;//break the program and stop further process
        }
        case 2:
        {
            cout<<"Enter the 2 Number \n";
            cin>>a;
            cin>>b;
            c=a-b;
            cout<<"The Subtraction is : "<<c;
            break;
        }
        case 3:
        {
            cout<<"Enter the 2 Number \n";
            cin>>a;
            cin>>b;
            c=a*b;
            cout<<"The Multiplication is : "<<c;
            break;
        }
        case 4:
        {
            cout<<"Enter the 2 Number \n";
            cin>>a;
            cin>>b;
            c=a/b;
            cout<<"The Division is : "<<c;
            break;
        }
        default:
        {
            printf("Wrong Input. ");
            goto x;//this goes to line number 10 
            break; 
        }
    }

    getch();
    return 0;
}