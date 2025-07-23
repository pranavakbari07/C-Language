#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Value : ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            cout << "Negative elements in the array are : " << arr[i] << endl;
        }
    }
}