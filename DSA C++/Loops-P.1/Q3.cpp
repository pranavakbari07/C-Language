#include <iostream>
using namespace std;

int main(){

    int num; 
    int odd = 0;
    int sum = 0;

    cout << "Enter the number of terms :";
    cin >> num;

    int i = 1;
    while(odd != num){ 
        if(i%2!=0){
            cout << i << endl;
            sum = sum + i;
            odd +=1;
        }
        i++;
    }
    cout << "Sum of odd numbers : " << sum << endl;

}