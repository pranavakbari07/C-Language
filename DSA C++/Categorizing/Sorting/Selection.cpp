
#include <iostream>
using namespace std;

//Selection Sort

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

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for(int a:arr){
        cout << a << " ";
    }

    return 0;
}
