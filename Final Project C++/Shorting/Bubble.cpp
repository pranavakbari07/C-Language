
#include <iostream>
using namespace std;

//Bubble Sort

int main(){

    int n;
    cout << endl;
    cout << "Enter the number of element in array : ";
    cin >> n;
    cout << endl;

    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the element : ";
        cin >> arr[i];
    }

    cout << endl;

    int pass = 1;

    while(pass < n){
        for(int i=0; i<n-pass; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp; 
            }
        }
        pass++;
    }

    for(int a:arr){
        cout << a << " ";
    }

    return 0;
}
