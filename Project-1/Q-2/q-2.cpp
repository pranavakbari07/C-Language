#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter the grade : ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done" << endl;
            break;
        case 'C':
            cout << "Good job" << endl;
            break;
        case 'D':
            cout << "You Passed, but you could do better" << endl;
            break;
        case 'F':
            cout << "Sorry, you failed" << endl;
            break;
        default:
            cout << "Invalid grade entered" << endl;
    }

}
