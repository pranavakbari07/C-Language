#include <iostream>
using namespace std;

int main() {
    int a;


    cout << "Enter your mark: ";
    cin >> a;

    switch (a / 10) {
        case 10:
        case 9:
            cout << "A grad";
            break;
        case 8:
        cout << "B grad";
            break;
        case 7:
        cout << "C grad";
            break;
        case 6:
        cout << "D grad";
             break;
        case 5:
        cout << "F grad";
        break;
        default:
        cout << "Fail";
    }

}
