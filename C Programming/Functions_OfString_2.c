//strlen(),strcmp(),strcpy(),strrev() this are the in built functions for string opreation 
#include<stdio.h>
#include<conio.h>
#include<string.h    >
int main()
{
    char a[20];
    char b[20];
    char e[20];
    int d,c;

    //1.strcpy(destination , source) 
    strcpy(a,"ganesh");
    strcpy(b,"pardeshi");
    strcpy(e,a);//we can copy also a string from 1 variable to another 
    //printf("%s %s ",a,b);
    puts(a);//ganesh
    puts(b);//pardeshi
    puts(e);//ganesh
    
    printf("\n\n");

    //2.strlen() to measure the length of the string 
    d=strlen(a);//6
    c=strlen(b);//8
    printf("length of 1st string is %d \nlength of 2nd string is %d",d,c);

    printf("\n\n");
    //3.strcmp() this function will compare the both the string 
        // when to 'string are in' dictionary order then result will be "-1"
        // when to 'string are not' in dictionary order then result will be "1"
        // when to 'string are same' dictionary order then result will be "0"
    printf("%d\n",strcmp(a,b));//-1 beacause the ganesh and pardeshi are in dictionary order
    printf("%d\n",strcmp(b,a));//1 beacause the ganesh and pardeshi are not dictionary order
    printf("%d",strcmp(a,e));//0 beacause the ganesh and ganesh are of same order
    
    printf("\n\n");
    
    //4.strrev() this fucntion will reverse the whole string 
    puts(strrev(e));


}