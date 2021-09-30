/*
Patter Type :-
1
23
456
78910
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
            if(j<=i)
            {
                printf("%d",p);
                p++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}