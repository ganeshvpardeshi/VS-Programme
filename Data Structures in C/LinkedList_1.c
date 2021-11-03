#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    int roll;
    float per;
    char name[10];
    struct student *p;
};
int main()
{
        struct student *a1;
        struct student *a2;
        a1=(struct student *)malloc(sizeof(struct student));
        
        a1->roll=12;
        strcpy(a1->name,"ganesh");
        a1->per=88.4;

        printf("1%d\n",a1->roll);
        printf("1%.2f\n",a1->per);
        printf("1%s\n",a1->name);
    // printf("\n\n");
    //     a1->p->roll=13;
    //     a1->p->per=90.20;
    //     strcpy(a1->p->name,"Manesh");

    //     printf("2%d\n",a1->p->roll);
    //     printf("2%.2f\n",a1->p->per);
    //     printf("2%s\n",a1->p->name);
    a1->p->p=(struct student *)malloc(sizeof(struct student));
    printf("\n\n");
        a1->p->p->roll=14;
        a1->p->p->per=99.20;
        strcpy(a1->p->p->name,"Mahesh");
        a1->p->p->p=0;

        printf("3%d\n",a1->p->p->roll);
        printf("3%.2f\n",a1->p->p->per);
        printf("3%s\n",a1->p->p->name);
}