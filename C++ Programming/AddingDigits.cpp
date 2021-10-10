#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,m,n,sum=0;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    // for(i=1;i<=n;i++)
    // {
    //     m=n%10;
    //     sum =sum +m;
    //     n=n/10;
    // }
    while(n>0)
    {
        m=n%10;
        sum =sum +m;
        n=n/10;
    }
    cout<<"The Addition of Digits is "<<sum<<endl;
    
    // int a,b,c,d,e,f,g,h;

    // printf("enter the number ");
    // scanf("%d",&a);

    // b=a%10;
    // c=a/10;

    // d=c%10;
    // e=c/10;

    // f=e%10;
    // g=e/10;

    // h=b+d+f+g;
    // printf("%d",h);

    getch();
    return 0;
}