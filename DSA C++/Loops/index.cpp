#include <iostream>
using namespace std;

int main()
{
    // int num;
    // cout << "enter a number to print its table :";
    // cin >> num;

    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i*num << endl;
    // }

    
    int num;
    cout << "enter a number to print its table :";
    cin >> num;


    int a = 1;
    while (a <= 10)
    {
        cout << num << "x" << a << "=" << a*num << endl;
        a++;
    }
}
