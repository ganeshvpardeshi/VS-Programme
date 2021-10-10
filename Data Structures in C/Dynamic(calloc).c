#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *a;
    a=(int *)malloc(sizeof(int));
    *a=10;
    printf("%d\n\n",*a);
    int *b;
    b=(int *)calloc(7,sizeof(int));
    *(b+0)=11;
    *(b+1)=33;
    *(b+2)=53;
    *(b+5)=77;
    *(b)=22;
    printf("%d %d %d %d %d\n\n\n\n",*b,*(b+2),*(b+5),*(b+0),*(b+1));
     
    b=(int *)realloc(b,10);
    *(b+8)=12;
    printf("0=%d \n",*b);
    printf("1=%d \n",*(b+1));
    printf("2=%d \n",*(b+2));
    printf("3=%d \n",*(b+3));
    printf("4=%d \n",*(b+4));
    printf("5=%d \n",*(b+5));
    printf("6=%d \n",*(b+6));
    printf("7=%d \n",*(b+7));
    printf("8=%d \n",*(b+8));
    printf("9=%d \n",*(b+9));
    return 0;
}