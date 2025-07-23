#include <iostream>
using namespace std;


// void sum(int a, int b){

//     cout << a+b;
// }


// void sum(int arr[]){
//     cout << arr;
// }

void sum(int &a){
    a = a + 10;
}

int main()  
{

    int a = 10;

    cout << "Before sum : " << a << endl;

    sum(a);

    cout << "After sum : " << a << endl;

    // int arr[3] = {10,20,30};

    // sum (arr);

    // int a = 20;
    // int &b = a;

    // // cout << b;

    // b = 30;

    // cout << b << endl;
    // cout << a;

    return 0;
}