#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,ch;
    char d,y;
    printf("Press 1. for Addition ");
    printf("\nPress 2. for Subtraction ");
    printf("\nPress 3. for Multiplication ");
    printf("\nPress 4. for Division ");
    x: printf("\nEnter your Choise : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            printf("Enter the 2 Number \n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("The Addition is : %d",c);
            break;//break the program and stop further process
        }
        case 2:
        {
            printf("Enter the 2 Number \n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("The Subtraction is : %d",c);
            break;
        }
        case 3:
        {
            printf("Enter the 2 Number \n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("The Multiplication is : %d",c);
            break;
        }
        case 4:
        {
            printf("Enter the 2 Number \n");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("The Division is : %d",c);
            break;
        }
        default:
        {
            printf("Wrong Input. ");
            goto x;//this goes to line number 10 
            break; 
        }
    }

    getch();
    return 0;
}