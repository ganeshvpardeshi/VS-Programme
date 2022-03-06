#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 12;
    try
    {
        if (a == 0)
        {
            throw a;
        }
        int c = b / a;
        cout << " " << c;
    }
    catch (int e)
    {
        cout << "Error Thrown." << endl;
    }
    return 0;
}