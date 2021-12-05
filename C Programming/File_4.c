#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name;
};
void main()
{
    FILE *fp;
    struct student z1;
    fp=fopen("binary.dat","rb");
    fread(&z1,sizeof(struct student),1,fp);
    printf("%d %c",z1.roll,z1.name);
    // a1.roll=120;
    // a1.name='G';
    // fp=fopen("binary.dat","wb");
    // fwrite(&a1,sizeof(struct student),1,fp);
    fclose(fp);
}