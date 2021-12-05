#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,l1,l2;
    printf("Enter a 1st String :");
    gets(a);
    printf("Enter a 2nd String :");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=l1;i<l1+l2;i++)
    {
        a[i]=b[i-l1];
    }
    printf("Concatenation of 1st and 2nd String is :\n%s",a);
    getch();
}