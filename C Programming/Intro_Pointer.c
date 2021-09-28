#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b=0;
    char c;
    a=10;
    printf("a= %u\n",&a);
       printf("b= %u\n",&b);
          printf("c= %u\n",&c);
printf("*************************************\n");
    int *x,**y;
    x=&a;
    y=&x;
    printf("a=%d\n",a);
       printf("x=%d\n",&(*x));//it shows address value of a
          printf("y=%d\n",&(**y));/* it shows us address value of a,
                            because we put the address of &(**y)*/
    printf("y=%d\n",&(*y));// it shows us the address value of x
       printf("address y= %d\n",&y);//address value of y
          printf("address x= %d\n",&x);//address value of x

printf("*********************************************\n");
    
    printf("x=%d\n",*x);//it shows us value of a 
       printf("y=%d\n",**y);/* it shows us value of a **y*/
    // printf("y=%d\n",&(*y));// it shows us the address value of x
    return 0;
}