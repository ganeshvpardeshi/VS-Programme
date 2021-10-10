// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
   
//     char s[100];
//     scanf("%[^\n]%*c", s);
//     printf("Hello, World!\n");
//     printf("%s", s);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     char ch;
//     char s[20], sen[100];
//     scanf("%c", &ch);
//     scanf("%s", s);
//     scanf("\n");
//     scanf("%[^\n]%*c", sen);
//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s\n", sen);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int a=0,b=0;
//     scanf("%d %d",&a,&b);
//     float x=0,y=0;
//     scanf("%f %f",&x,&y);
    
//     int sumofint=a+b;
//     printf("%d ",sumofint);
//     int subofint=a-b;
//     printf("%d\n",subofint);
    
//     float sumoffloat=x+y;
//     printf("%.1f ",sumoffloat);
//     float suboffloat=x-y; 
//     printf("%.1f",suboffloat);
    
//     return 0;
// }
// #include <stdio.h>

// void update(int *a,int *b) {
//     *a += *b;
//     *b = abs(*a - 2 * *b);
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// int main() {

//     int a, b;
//     char* rep[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     scanf("%d\n%d", &a, &b);
//     for(int i = a; i <= b; i++) {
        
//         if(i > 9) 
//         {
//             if(i % 2 == 0)
//             {
//                 printf("even\n");
//             }
//             else 
//             {
//                 printf("odd\n");
//             }
//         }
//         else 
//         {
//             printf("%s\n", rep[i]);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
    
//     int n;
//     scanf("%d", &n);
//     if(n == 1) {
//         printf("one");
//     }
//     else if(n == 2) {
//         printf("two");
//     }
//     else if(n == 3) {
//         printf("three");
//     }
//     else if(n == 4) {
//         printf("four");
//     }
//     else if(n == 5) {
//         printf("five");
//     }
//     else if(n == 6) {
//         printf("six");
//     }
//     else if(n == 7) {
//         printf("seven");
//     }
//     else if(n == 8) {
//         printf("eight");
//     }
//     else if(n == 9) {
//         printf("nine");
//     }
//     else {
//         printf("Greater than 9");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//     scanf("%d", &n);

//     if(n > 9) {
//         printf("%s", represent[0]);
//     }
//     else {
//         printf("%s", represent[n]);
//     }

//     return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main()
// {
//     int ch,a,b;

//     printf("Press 1: For Addition \n");
//     printf("Press 2: For Subtraction \n");
//     printf("Press 3: For Multiplication \n");
//     printf("Press 4: For Division \n");
//     printf("Press 5: For Exit");
//     printf("Enter Your Choice");
//     scanf("%d",&ch);

//         switch(ch)
//         {
//             case 1:
//             {
//                 printf("Enter Two Numbers");
//                 scanf("%d%d",&a,&b);
//                 printf("Addition is %d",a+b);
//                 break;
//             } 
//             case 2:
//             {
//                 printf("Enter Two Numbers");
//                 scanf("%d%d",&a,&b);
//                 printf("Subtraction is %d",a-b);
//                 break;
//             }
//             case 3:
//             {
//                 printf("Enter Two Numbers");
//                 scanf("%d%d",&a,&b);
//                 printf("Multiplication is %d",a*b);
//                 break;
//             }

//             case 4:
//             {
//                 printf("Enter Two Numbers");
//                 scanf("%d%d",&a,&b);
//                 printf("Division is %d",a/b);
//                 break;
//             }
        
//             case 5:
//             {
//                 exit(0);
//             }  
//             default:
//             {
//                 printf("Invalid Choice Entered");
//             }
//         }
//     getch();
// }
#include <stdio.h>
 
// function to sort the subsection a[i .. j] of the array a[]
void merge_sort(int i, int j, int a[], int b[]) 
{
    if (j <= i) 
    {
        return;     // the subsection is empty or a single element
    }
    int mid = (i + j) / 2;

    // left sub-array is a[i .. mid]
    // right sub-array is a[mid + 1 .. j]
    
    merge_sort(i, mid, a, b);     // sort the left sub-array recursively
    merge_sort(mid + 1, j, a, b);     // sort the right sub-array recursively

    int pointer_left = i;       // pointer_left points to the beginning of the left sub-array
    int pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
    int k;      // k is the loop counter

    // we loop from i to j to fill each element of the final merged array
    for (k = i; k <= j; k++) 
    {
        if (pointer_left == mid + 1)
        {      // left pointer has reached the limit
            b[k] = a[pointer_right];
            pointer_right++;
        } 
        else if (pointer_right == j + 1) 
        {        // right pointer has reached the limit
            b[k] = a[pointer_left];
            pointer_left++;
        }
        else if (a[pointer_left] < a[pointer_right]) 
         {        // pointer left points to smaller element
            b[k] = a[pointer_left];
            pointer_left++;
        }
        else 
        {        // pointer right points to smaller element
            b[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) 
    {      // copy the elements from aux[] to a[]
        a[k] = b[k];
    }
}

int main() 
{
  int a[100], b[100], n, i, d, swap;
 
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
    for (i = 0; i < n; i++)
    {
        printf("Array[%d] : ",i);
        scanf("%d", &a[i]);
    }
  merge_sort(0, n - 1, a, b);
 
  printf("The Sorted Array  \n");
 
  for (i = 0; i < n; i++)
  {
     printf("Array[%d] : %d\n",i,a[i]);
  }
  return 0;
}