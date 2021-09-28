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

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) {
        printf("%s", represent[0]);
    }
    else {
        printf("%s", represent[n]);
    }

    return 0;
}
