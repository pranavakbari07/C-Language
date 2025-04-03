#include <iostream>
using namespace std;

int main()
{

    float num1, num2, result;
    int choice;

    cout << "Enter Num1 : ";
    cin >> num1;
    cout << "Enter Num2 : ";
    cin >> num2;

    cout << "Press 1 for +" << endl;
    cout << "Press 2 for -" << endl;
    cout << "Press 3 for *" << endl;
    cout << "Press 4 for /" << endl;
    // cout << "Press 5 for %" << endl;
    cout << "Press 0 to exit" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    if (choice == 0)
        {
            cout << "Exiting program..." << endl;
        }

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is " << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "subtraction of " << num1 << " and " << num2 << " is " << result;
        break;
    case 3:
        result = num1 * num2;
        cout << "Multiplay of " << num1 << " and " << num2 << " is " << result;
        break;
    case 4:
        result = num1 / num2;
        cout << "Division of " << num1 << " and " << num2 << " is " << result;
        break;    

        
    }

    return 0;
}