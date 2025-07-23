#include <iostream>
using namespace std;
#include <string.h>

//Procedural Way

int main(){

    int *arr = new int[5];
    delete[] arr;

    arr = NULL;

    if(arr == NULL){
        cout << "Memory allocation is unsuccessful...!";
    }else{
        cout << "Memory allocation is successful...!";
    }

    return 0;

}