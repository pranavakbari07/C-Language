#include <iostream>
using namespace std;


int main(){
    char alphabet = 'a';
    int skip = 4;

    do 
    {
        cout << alphabet << endl;
        alphabet += skip;
    } 
    
    while (alphabet <='z');
}