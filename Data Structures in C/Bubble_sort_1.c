#include<stdio.h>
int main()
{
    int i,j;
    int a[100];
    int n=0,temp=0;

    printf("enter the number ");
    scanf("%d",&n);

    printf("Enter the %d elements : \n",n);
    for(i = 0; i < n; i++)
    {
         scanf("%d",&a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j]>a[j+1])
            {
                //swaping
                // temp    =  a[i];
                // a[i]    =  a[j];
                // a[j]  = temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted list in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



// #include <stdio.h>
// int main()
// {
//   int array[100], n, c, d, swap;

//   printf("Enter number of elements\n");
//   scanf("%d", &n);

//   printf("Enter %d integers\n", n);

//   for (c = 0; c < n; c++)
//     scanf("%d", &array[c]);

//   for (c = 0 ; c < n - 1; c++)
//   {
//     for (d = 0 ; d < n - c - 1; d++)
//     {
//       if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
//       {
//         swap       = array[d];
//         array[d]   = array[d+1];
//         array[d+1] = swap;
//       }
//     }
//   }

//   printf("Sorted list in ascending order:\n");

//   for (c = 0; c < n; c++)
//      printf("%d\n", array[c]);

//   return 0;
// }