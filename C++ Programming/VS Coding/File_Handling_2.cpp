#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("ganesh.txt");
    int aa=10;

    fout<<"hello"<<aa;
    char a;
    // fout.seekp(-3,ios_base::cur);
    fout.seekp(2,ios_base::beg);
    fout<<"KK";
    cout<<fout.tellp();
    fout.close();
}