#include <iostream>
using namespace std;

//Insertion Sort

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

    for(int i=1; i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(int a:arr){
        cout << a << " ";
    }

    return 0;
}