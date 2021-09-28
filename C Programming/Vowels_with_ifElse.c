#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the Charater between (a, e, i, o, u)\n");
    scanf("%c",&ch);

    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')
    ||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
    }
    else
    {
        printf("Enter the valid Vowels between (a, e, i, o, u)\n");
    }
        getch();
}