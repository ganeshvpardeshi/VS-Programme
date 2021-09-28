#include<stdio.h>
#include<conio.h>
int add(int x, int y)  //formal parameters or arguments.It is call by value or pass by value 
{
    int z;
    z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    printf("Enter two the numbers \n");
    scanf("%d %d",&a,&b);
    c=add(a,b); //actual parameters or arguments

    printf("The Addition is %d",c);
    getch();
    return 0;

}