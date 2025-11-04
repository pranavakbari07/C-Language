#include <iostream>
using namespace std;

int main(){

    // int *ptr;

    // int a = 10;

    // ptr = &a;

    // cout << "Address is : " << ptr << endl;
    // cout << "Value is : " << *ptr;


     int arr[5] = {12,23,34,45,56}; 

     int *ptr[5]; 

     for(int i = 0; i<5; i++){
        ptr[i] = &arr[i];
     }

     for(int i = 0; i<5; i++){
        // cout << ptr[i] << endl;
        cout << *ptr[i] << ",";
     }


    // int a = 10;
    // int *p = &a;  
    // int **p2 = &p;

    // cout << p2 << endl;
    // cout << **p2;

    return 0;
}