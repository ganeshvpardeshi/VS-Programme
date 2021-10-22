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
// #include <stdio.h>
 
// // function to sort the subsection a[i .. j] of the array a[]
// void merge_sort(int i, int j, int a[], int b[]) 
// {
//     if (j <= i) 
//     {
//         return;     // the subsection is empty or a single element
//     }
//     int mid = (i + j) / 2;

//     // left sub-array is a[i .. mid]
//     // right sub-array is a[mid + 1 .. j]
    
//     merge_sort(i, mid, a, b);     // sort the left sub-array recursively
//     merge_sort(mid + 1, j, a, b);     // sort the right sub-array recursively

//     int pointer_left = i;       // pointer_left points to the beginning of the left sub-array
//     int pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
//     int k;      // k is the loop counter

//     // we loop from i to j to fill each element of the final merged array
//     for (k = i; k <= j; k++) 
//     {
//         if (pointer_left == mid + 1)
//         {      // left pointer has reached the limit
//             b[k] = a[pointer_right];
//             pointer_right++;
//         } 
//         else if (pointer_right == j + 1) 
//         {        // right pointer has reached the limit
//             b[k] = a[pointer_left];
//             pointer_left++;
//         }
//         else if (a[pointer_left] < a[pointer_right]) 
//          {        // pointer left points to smaller element
//             b[k] = a[pointer_left];
//             pointer_left++;
//         }
//         else 
//         {        // pointer right points to smaller element
//             b[k] = a[pointer_right];
//             pointer_right++;
//         }
//     }

//     for (k = i; k <= j; k++) 
//     {      // copy the elements from aux[] to a[]
//         a[k] = b[k];
//     }
// }

// int main() 
// {
//   int a[100], b[100], n, i, d, swap;
 
//   printf("Enter number of elements in the array:\n");
//   scanf("%d", &n);
 
//   printf("Enter %d integers\n", n);
 
//     for (i = 0; i < n; i++)
//     {
//         printf("Array[%d] : ",i);
//         scanf("%d", &a[i]);
//     }
//   merge_sort(0, n - 1, a, b);
 
//   printf("The Sorted Array  \n");
 
//   for (i = 0; i < n; i++)
//   {
//      printf("Array[%d] : %d\n",i,a[i]);
//   }
//   return 0;
// }
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int max_of_four(int a,int b,int c,int d)
// {
//     if((a>b)&&(a>c)&&(a>d))
//     {
//         return a;
//     }
//     else if((b>a)&&(b>c)&&(b>d))
//     {
//         return b;
//     }
//     else if((c>a)&&(c>b)&&(c>d))
//     {
//         return c;
//     }
//     else if((d>a)&&(d>b)&&(d>c))
//     {
//         return d;
//     }
// };

// int main() {
//     int a, b, c, d;
//     int ans;
//     cin>> a >> b >> c >> d;
    
//     ans=max_of_four(a,b,c,d);
//     cout<<ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;


// int main() {
//     int n,i;
//     int a[3000];
//     cin>>n;
    
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=n-1;i>-1;i--)
//     {
//         cout<<<<a[i];
//     }
//     return 0;
// }
// #include <iostream>
// #include <sstream>
// using namespace std;

// struct Student 
// {
//     int age;
//     char first_name[1000];
//     char last_name[1000];
//     int standard;
//     int val1;
//     int val2;
//     char val3[20];
//     char val4[20];
//     //age
//     void set_age(int a)
//     {
//         val1 = a;
//     }
//     int get_age()
//     {
//         return val1;
//     }
//     //standard
//     void set_standard(int b)
//     {
//         val2 = b;
//     }
//     //
//     int get_standard()
//     {
//         return val2;
//     }
//     //first name
//     void set_first_name(b)
//     {
//         val3 = b;
//     }
//     int get_first_name()
//     {
//         return val3;
//     }
//     //last name
//     void set_last_name(c)
//     {
//         val4 = b;
//     }
//     int get_last_name()
//     {
//         return val4;
//     }
//     void to_string()
//     {
//         cout<<get_age()<<","<<get_first_name()<<","<<get_last_name()<<","<<get_standard();
//     }
// };

// int main() {
//     int age, standard;
//     string first_name, last_name;
    
//     cin >> age >> first_name >> last_name >> standard;
    
//     Student st;
//     st.set_age(age);
//     st.set_standard(standard);
//     st.set_first_name(first_name);
//     st.set_last_name(last_name);
    
//     cout << st.get_age() << "\n";
//     cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
//     cout << st.get_standard() << "\n";
//     cout << "\n";
//     cout << st.to_string();
    
//     return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// class Triangle{
//     public:
//     	void triangle(){
//      		cout<<"I am a triangle\n";
//     	}
// };
// class Isosceles : public Triangle{
//     public:
//     	void isosceles(){
//     		cout<<"I am an isosceles triangle\n";
//     	}
//   		void description()
//         {
//                 cout<<"In an isosceles triangle two sides are equal";     
//         }
// };
// int main(){
//     Isosceles isc;
//     isc.isosceles();
//   	isc.description();
//     isc.triangle();
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
    		cout<<"I am an isosceles triangle\n";
  		}
};
class Equilateral : public Isosceles
{
    public :
        void equilateral()
        {
            cout<<"I am an equilateral triangle\n";
        }
};  

int main(){
  
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}
//     I am an equilateral triangle
//     I am an isosceles triangle
//     I am a triangle