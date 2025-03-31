#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter the grade : ";
    cin >> grade;

    if (grade == 'A') {
        cout << "Excellent work!" << endl;
    } else if (grade == 'B') {
        cout << "Well done" << endl;
    } else if (grade == 'C') {
        cout << "Good job" << endl;
    } else if (grade == 'D') {
        cout << "You Passed, but you could do better" << endl;
    } else if (grade == 'F') {
        cout << "Sorry, you failed" << endl;
    } else {
        cout << "Invalid grade entered" << endl;
    }

}

