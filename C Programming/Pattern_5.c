/*
Pattern Type :- 
    *
   ***
  *****
 *******
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
           if(j>7-i)// the condition is important here 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        for(j=2;j<=7;j++)
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
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=7;j++)
//         {
//            if(j>=5-i && j<=3+i)// the condition is important here 
//             {
//                 printf("*");
//             }
//             else 
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     getch();
// }