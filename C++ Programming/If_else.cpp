#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a;
    cout << "Enter the number " << endl;        //printf("Enter the number : ");
    cin >> a;                                   //scanf("%d",&a);
    if (a < 10)
    {
        cout << "The Number is Less than 10" << endl;
    }
    else if (a < 50)
    {
        cout << "The Number is Less than 50" << endl;
    }
    else
    {
        cout << "The Number is Greater than 100" << endl;
    }

    getch();
}
