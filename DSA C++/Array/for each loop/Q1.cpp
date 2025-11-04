#include <iostream>
using namespace std;

int main()
{

    // int arr[5] = {12, 34, 56, 78, 98};

    // int sum = 0;

    // for(int a : arr){
    //     sum += a;
    // }

    // cout << sum/5;

    // for(int i = 1; i<=5; i++){
    //     sum += i;
    // }

    // cout << sum/5;

    // int arr[5] = {12, 34, 56, 78, 98};
    // int arr2[5] = {12, 34, 56, 78, 98};
    // int arr3[5];

    // for (int i = 0; i <= 4; i++)
    // {
    //     arr3[i] = arr[i] + arr2[i];
    // }


    // for(int a : arr3){
    //     cout << a << endl;
    // }



    int arr3[6] = {2002,2003,2004,2005,2006,2007};

    for(int a : arr3){
        if(a%4 == 0 && a%100 != 0 || a%400 == 0){
            cout << a << endl;
        }
    }
}