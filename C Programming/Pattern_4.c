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
    int i,j,k=1;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
           if(j>=6-i)// the condition is important here 
            {
                printf("%d",k);
                k++;
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