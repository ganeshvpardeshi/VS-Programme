#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char a;
    fp=fopen("ganesh_2.txt","r");

    a=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",a);
        a=getc(fp);
    }
    getch();
}