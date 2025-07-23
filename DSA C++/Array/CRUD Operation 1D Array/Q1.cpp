#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number for index  " << i << " : " << endl;
        cin >> arr[i];
    }

    cout << "your all array element : ";

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl << endl;

    int index;
    cout << "Enter the index number to delete : ";
    cin >> index;

    for (int i = 0; i < size; i++)
    {
        if (i == index)
        {
            arr[i] = 0;
        }
    }

    cout << "Array after deletation : ";

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl << endl;


    int index2;
    cout << "Enter the index number to update : ";
    cin >> index2;

    for (int i = 0; i < size; i++)
    {
        if (i == index2)
        {
            cout << "Enter the value to update/replace : ";
            cin >> arr[i];
        }
    }

    cout << "Array after updatation : ";

    for (int a : arr)
    {
        cout << a << " ";
    }
}