#include<iostream>
#include<conio.h>
using namespace std;
struct Student
{
    int s_id;
    char f_name[10];
    char s_name[10];
    float s_per;
};
int main()
{
    struct Student s1;

    cout<<"Enter the ID, First and Last Name, And Percentage "<<endl;
    
    cin>>s1.s_id;
    cin>>s1.f_name;
    cin>>s1.s_name;
    cin>>s1.s_per;

    cout<<"\n\n";
    cout<<"The Details Are As Follows : "<<endl;
    cout<<"The ID : "<<s1.s_id<<endl;
    cout<<"The Name : "<<s1.f_name<<" "<<s1.s_name<<endl;
    cout<<"And The Percentage : "<<s1.s_per<<endl;

    getch();
    return 0;   
}