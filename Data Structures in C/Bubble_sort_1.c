//Bubble Sort
#include <stdio.h>
void main()
{
    int i, j;
    int a[100]; // a is a array with maximum range of 100.
    int n = 0, temp = 0;
    // int isSorted = 0;

    printf("Enter the Size of Array : ");
    scanf("%d", &n);//4

    printf("Enter the %d Elements : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)//0, 1,2,3   iterarion
    {
        // isSorted = 1;
        // printf("Working on pass number %d\n", i + 1);
        for (j = 0; j < n - i - 1; j++)//0<4-0-1 == 4  3
        {
            if (a[j] > a[j + 1])
            {
                //swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSorted = 0;
            }
            // continue;
        }
        // if(isSorted) //1
        // {
        //     break;
        // }
    }

    printf("\nSorted list in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}