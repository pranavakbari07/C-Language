#include <iostream>
using namespace std;

float calculate(int choice, float a, float b)
{
    switch (choice)
    {
    case 1:
        return a + b;
    case 2:
        return a - b;
    case 3:
        return a * b;
    case 4:
        return (b != 0) ? a / b : 0;
    case 5:
        return (b != 0) ? (int)a % (int)b : 0;
    default:
        return 0;
    }
}

int main()
{
    int choice;
    float num1, num2;

    while (true)
    {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Exiting program..." << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        if (choice >= 1 && choice <= 5)
            cout << "Result: " << calculate(choice, num1, num2) << endl;
        else
            cout << "Invalid choice! Try again." << endl;
    }

    return 0;
}