//strlen(),strcmp(),strcpy(),strrev() this are the in built functions for string opreation 
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char a[20];
    char b[20];
    char e[20];
    int d,c;

    //1.strcpy(destination , source) 
    strcpy(a,"ganesh");
    strcpy(b,"pardeshi");
    strcpy(e,a);//we can copy also a string from 1 variable to another 
    //printf("%s %s ",a,b);
    puts(a);//ganesh
    puts(b);//pardeshi
    puts(e);//ganesh
    
    cout<<"\n\n";

    //2.strlen() to measure the length of the string 
    d=strlen(a);//6
    c=strlen(b);//8
    cout<<"length of 1st string is %d \nlength of 2nd string is %d",d,c);

    cout<<"\n\n";
    //3.strcmp() this function will compare the both the string 
        // when to 'string are in' dictionary order then result will be "-1"
        // when to 'string are not' in dictionary order then result will be "1"
        // when to 'string are same' dictionary order then result will be "0"
    cout<<strcmp(a,b);//-1 beacause the ganesh and pardeshi are in dictionary order
    cout<<strcmp(b,a);//1 beacause the ganesh and pardeshi are not dictionary order
    cout<<strcmp(a,e);//0 beacause the ganesh and ganesh are of same order
    
    cout<<"\n\n";
    
    //4.strrev() this fucntion will reverse the whole string 
    puts(strrev(e));


}