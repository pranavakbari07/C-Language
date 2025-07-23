#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter the grade : ";
    cin >> grade;

    switch (grade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            cout << "Congratulations! You are eligible for the next level" << endl;
            break;
        case 'F':
            cout << "Please try again next time" << endl;
            break;
        default:
            cout << "Invalid grade entered" << endl;
            break;
    }


}
