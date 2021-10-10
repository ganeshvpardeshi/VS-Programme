#include<stdio.h>
#include<conio.h>
int add(int x, int y)  //formal parameters or arguments.It is call by value or pass by value 
{
    int z;
    z=x+y;
    return z;
};
int sub(int p,int q)
{
    int r;
    r=p-q;
    return r;
};
int mul(int m, int n)
{
    int l;
    l=m*n;
    return l;
};
float div(float c, float d)
{
    float e;
    e=c/d;
    return e;
};
int main()
{
    int a,b;
    printf("Enter two the numbers \n");
    scanf("%d %d",&a,&b);
    //add(a,b); //actual parameters or arguments

    printf("The Addition is %d\n",add(a,b));
    printf("The Subtraction is %d\n",sub(a,b));
    printf("The Multiplication is %d\n",mul(a,b));
    printf("The Division is %.2f\n",div(a,b));
    getch();
    return 0;

}