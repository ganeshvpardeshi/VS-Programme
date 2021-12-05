#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,l;
    char a[10],temp;
    printf("Enter a string ");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-i-1])
        {
            printf("Not a Palindrome.");
            break;
        }
    }
    if(i==l/2)
    {
        printf("It is a Palindrome.");
    }
    getch();
}