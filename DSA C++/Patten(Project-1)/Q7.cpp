#include <iostream>
using namespace std;

int main(){
    
    int rows = 5;  
    char ch;
    for (char i = 0; i < rows; i++) 
    {
        ch = 'A' + i;
        for (char j = 0; j <= i; j++) {
            cout << ch - j;
        }
        cout << endl;
    }
}