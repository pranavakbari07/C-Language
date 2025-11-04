#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter the grade : ";
    cin >> grade;


    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << "Congratulations! You are eligible for the next level" << endl;
    } else if (grade == 'F') {
        cout << "Please try again next time" << endl;
    } else {
        cout << "Invalid grade entered" << endl;
    }
}
