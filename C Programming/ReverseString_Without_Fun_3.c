//reverse the string without using any string in-built functions
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[20],temp;
    printf("Enter a string to reverse it.:\n");
    // scanf("%s",a);
    gets(a);
    //length of the string 
    l=strlen(a);

    for(i=0;i<l/2;i++)
    {
        //swaping
        temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    }
    // printf("%s"a);
    puts(a);
}