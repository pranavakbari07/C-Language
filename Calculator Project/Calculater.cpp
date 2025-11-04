#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
};

int subtraction(int a, int b)
{
    return a - b;
};

int multiply(int a, int b)
{
    return a * b;
};

int division(int a, int b)
{
    return a / b;
}

int module(int a, int b)
{
    return a % b;
}

int main()
{

    do
    {
        int choice;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        float num1, num2;
        cout << "Enter Num1 : ";
        cin >> num1;
        cout << "Enter Num2 : ";
        cin >> num2;
        

        if (choice == 0)
        {
            cout << "Exiting program..." << endl;
        }

        switch (choice)
        {
        case 1:
            cout << "Sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
            break;
        case 2:
            cout << "subtraction of " << num1 << " and " << num2 << " is " << subtraction(num1, num2) << endl;
            break;
        case 3:
            cout << "Multiplay of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Division of " << num1 << " and " << num2 << " is " << division(num1, num2) << endl;
            break;
        case 5:
            cout << "modual of " << num1 << " and " << num2 << " is " << module(num1, num2) << endl;
            break;
        }
    } while (true);

    return 0;
}