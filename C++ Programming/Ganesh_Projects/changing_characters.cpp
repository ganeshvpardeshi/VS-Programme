#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a,a1,b,b1,c,c1;
    char string[10];
    cin>>string;

    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i] == 65)
        {
            a = string[i];
            string[i] = 69;
        }
        else if(string[i] == 69)
        {
            a = string[i];
            string[i] = 73;
        }
        else if(string[i] == 73)
        {
            a = string[i];
            string[i] = 79;
        }
        else if(string[i] == 79)
        {
            a = string[i];
            string[i] = 85;
        }
        else if(string[i] == 85)
        {
            a = string[i];
            string[i] = 65;
        }
        //lowercase
        if(string[i] == 65)
        {
            a = string[i];
            string[i] = 69;
        }
        else if(string[i] == 69)
        {
            a = string[i];
            string[i] = 73;
        }
        else if(string[i] == 73)
        {
            a = string[i];
            string[i] = 79;
        }
        else if(string[i] == 79)
        {
            a = string[i];
            string[i] = 85;
        }
        else if(string[i] == 85)
        {
            a = string[i];
            string[i] = 65;
        }
    }
            cout<<string;
    return 0;
}