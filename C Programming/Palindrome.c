#include <stdio.h>
#include <conio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {    printf("palindrome number ");
        printf("%d   %d",sum,temp);}
    else
        {printf("%d   %d",sum,temp);
        printf("not palindrome");}
    return 0;
} 