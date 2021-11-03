/*write a program to measure the length of the 
string without using string function*/ 
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char a[20];
    printf("Enter a String to measure the length : ");
    // scanf("%s",a);
    gets(a);//this function is use for string opreation 
    for(i=0;a[i]!='\0';i++);
    printf("%d",i);
    
}