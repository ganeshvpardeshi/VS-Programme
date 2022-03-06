#include<stdio.h>
#include<stdlib.h>
int add(int a, int b)
{
    return a+b;
}
int sub(int c, int d)
{
    return c-d;
}
int mul(int m, int n)
{
    return m*n;
}
float divi(float f,float g)
{
    return f/g;
}
void main()
{
    int a,b;
    int sum,sum1,sum2,sum3;
    sum=sum1=sum2=sum3=0;
    char ch;
    printf("Enter the Two Elements : ");
    scanf("%d%d",&a,&b);

    printf("\n\nEnter the Operator like (+,-,*,/) : ");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
        case '+':
        {
            sum=add(a,b);
            printf("the result is %d",sum);
            break;
        }
        case '-':
        {
            sum1=sub(a,b);
            printf("the result is %d",sum1);
            break;
        }
        case '*':        
        {
            sum2=mul(a,b);
            printf("the result is %d",sum2);
            break;
        }
        case '/':
        {
            sum3=divi(a,b);
            printf("the result is %d",sum3);
            break;
        }
        default:
            printf("wrong input");
            break;
    }
}