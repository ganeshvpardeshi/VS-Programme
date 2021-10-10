#include<stdio.h>
#include<conio.h>
struct Student
{
    int s_id;
    char f_name[10];
    char s_name[10];
    float s_per;    

};
int main()
{
    struct Student s1;

        printf("Enter the ID, First and Last Name and Percentage : \n");
        scanf("%d",&s1.s_id);
        scanf("%s",&s1.f_name);
        scanf("%s",&s1.s_name);
        scanf("%f",&s1.s_per);

    printf("\nThe Student Details are as follows : \n");
    printf("ID : %d \nName : %s %s \nPercentage : %.2f",s1.s_id,s1.f_name,s1.s_name,s1.s_per);

    getch();
    return 0;
}