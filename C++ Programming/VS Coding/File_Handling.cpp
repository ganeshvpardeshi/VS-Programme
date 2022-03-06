#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream fout;
    // fout.open("ganesh.txt");
    // fout<<"HII Ganesh";
    // fout.close();
    
    // char p;
    // ifstream fin;
    // fin.open("ganesh.txt");
    // // fin>>p;
    // p = fin.get();
    // while(!fin.eof())
    // {
    //     cout<<p;
    //     // fin>>p;
    //     p = fin.get();
    // }
    // fin.close();
    // return 0;


    char a[20];
    int roll;
    char b[20];

    ofstream fout;
    cout<<"Enter the name : ";
    cin>>a;
    cout<<"Enter the age : ";
    cin>>roll;
    fout.open("ganesh.txt");
    fout<<a;
    // fout.put(a);
    // fout.put = a;
    fout<<roll;
    cout<<a;
    cout<<roll;
    // fout.close();
}