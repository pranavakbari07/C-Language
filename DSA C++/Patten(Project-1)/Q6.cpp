#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i<7; i++) 
    {
        for (int j = 1; j<7-i; j++) {
            cout << j%2;
        }
        cout << endl;
    }
}