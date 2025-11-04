#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n; 

    cout << "Numbers divisible by both 3 and 5 are: ";

    for (int i = 1; i <= n; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

}