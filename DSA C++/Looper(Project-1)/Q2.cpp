#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a digit :" ;
    cin >> num;

    int count = 0;
    do
    {
        num = num / 10;
        count++;
    }

    while (num != 0);

    cout << "Total number of digit :" << count;
}