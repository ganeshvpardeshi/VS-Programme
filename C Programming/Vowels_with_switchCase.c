#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the Charater Between (a, e, i, o, u )\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'e':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'i':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'o':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'u':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'A':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'E':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'I':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'O':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;
        case 'U':
               printf("The Chracter that you Entered is Vowel And the character is %c\n",ch);
               break;

        default:
                printf("Enter the valid Vowels between (a, e, i, o, u)\n");
    }
    getch();
}