/*
Pattern Type :- 
ABCD
EFGH
IJKL
MNOP
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,p=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%c",64+p);
            p++;
        }
        printf("\n");
    }
    getch();
    return 0;
}