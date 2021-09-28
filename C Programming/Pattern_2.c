/*
Pattern Type :- 
*
**
***
****
*****
 */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(j<=i)// the condition is important here 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}