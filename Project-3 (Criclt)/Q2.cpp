#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int num = 11;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << num;
            num++;
        }
        cout << endl;
    }
}