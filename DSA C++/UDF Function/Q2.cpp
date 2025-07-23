#include <iostream>
using namespace std;

void array(){
    int num;
    cout << "Enter a size of array : ";
    cin >> num;
    
    int arr[num];
    for (int i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    
    int choice;
    cout << "Press 1 for sum" << endl;
    cout << "Press 2 for average" << endl << endl;
    cout << "Enter a number : ";
    cin >> choice; 

    int sum=0;

    for(int i=0; i<num; i++){
        sum+=arr[i]; 
    }
    if(choice == 1){
        cout << "Sum of array is : " << sum << endl << endl;
    } 
    else if(choice == 2){ 
        int avg = sum / num; 
        cout << "Average of array is: " << avg;
    } 
};

int main(){
    array();
}