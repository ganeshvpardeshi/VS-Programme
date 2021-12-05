#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char a[20]={"Ganesh"};

    fp=fopen("ganesh_2.txt","w");
    
    for(int i=0;i<6;i++)
    {
        fputc(a[i],fp);
    }
    fclose(fp);
    getch();
}