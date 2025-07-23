#include <iostream>
using namespace std;
#include <string.h>
#include <vector>

int main()
{

    vector<int> Arr{10, 20, 30};

    int choice;

    do
    {
        cout << "Welcome to Array Program..!" << endl << endl;

        cout << "Press 1 To Add An Elemnet In Array : " << endl;
        cout << "Press 2 To Print all Elemnet of Array : " << endl;
        cout << "Press 3 To Delete Elemnet of Array : " << endl;
        cout << "Press 4 To Update Elemnet of Array : " << endl;
        cout << "Press 0 To Exit The Program..! " << endl << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1)
        {
            int element;
            cout << "Enter the element : ";
            cin >> element;

            Arr.push_back(element);
            cout << "Element Added Successfully..!" << endl
                 << endl;
        }
        else if (choice == 2)
        {
            if (Arr.size() == 0)
            {
                cout << "Array is empty..!" << endl;
            }
            else
            {
                cout << "Here is the list of elemnet : " << endl;
                for (int a : Arr)
                {
                    cout << a << endl;
                }
            }
            cout << endl
                 << endl;
        }
        else if (choice == 3)
        {
            int index;

            cout << "Enter the index to remove the element : ";
            cin >> index;

            if (index < Arr.size())
            {
                Arr.erase(Arr.begin() + index);
                cout << "Element deleted successfully..!" << endl;
            }
            else
            {
                cout << "Your index is not valid..!" << endl;
            }
        }
        else if (choice == 4)
        {
            int index, value;
            cout << "Enter the index : ";
            cin >> index;
            cout << "Enter the value : ";
            cin >> value;
            ;

            Arr[index] = value;
            cout << "Element updated successfully..!" << endl;
        }
        else if (choice == 0)
        {
            cout << "Exit the Program..!";
        }
    } while (choice > 0);

    return 0;
}