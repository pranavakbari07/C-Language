#include <iostream>
using namespace std;

int main()
{

    // int sum = 0;
    // int num;

    // cout << "enter a number :";
    // cin >> num;

    // for(int i = 1; i<=num; i++){
    //     sum = sum + i;
    // }

    // cout << "sum of the num is :" << sum;

    // int num;
    // int fact = 1;

    // cout << "Enter a number to found factorial :";
    // cin >> num;

    // for (int i = num; i >= 1; i--)
    // {
    //     fact = fact*i;
    // }

    // cout << " Factorial of " << num << " is " << fact;

    int num;

    cout << "Enter a number :";
    cin >> num;

    int i = 1;

    cout << "factor of " << num << "is";

    while (i <= num)
    {
        if (num%i == 0)
        {
            cout << i;
        }
        i++;
    }
}