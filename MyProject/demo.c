#include<stdio.h>
int main()
{

     int a = 56, b = 876;
     int t=0;
    while(b!=0)
    {
        t = t+a;
        b = b-1;
    }
    printf("%d",t);
    return t;
}