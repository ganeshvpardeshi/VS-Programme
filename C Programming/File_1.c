#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    fp=fopen("ganesh_1.txt","w");
    fprintf(fp,"hello");
    fputs("ganeshVP",fp);
    fclose(fp);
    getch();
}