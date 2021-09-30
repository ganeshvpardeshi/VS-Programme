#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(j<=7-i)
            {
                printf(" * ");
            }
            else
            {
              printf("   ");
            }
        }
       printf("\n");
    }
    for(i=7;i<12;i++)
    {
        for(j=6;j<=12;j++)
        {
            if(i>=j)// the condition is important here 
            {
                printf(" * ");
            }
            else 
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    for(i=12;i<20;i++)
    {
        for(j=12;j<=13;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}