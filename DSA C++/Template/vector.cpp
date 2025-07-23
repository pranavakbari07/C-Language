#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


int main(){

    // vector <int> arr;
    // vector <int> arrr(5,2);

    // g++ -std=c++11 file.cpp
    vector <int> arr3{12,13,15,18,19};

    // last element add
    arr3.push_back(22);
    // element delete
    arr3.pop_back();
    // 
    arr3.insert(arr3.begin()+2,66);
    //
    arr3.erase(arr3.begin()+2);
    //
    arr3.clear();
    //
    cout << arr3.empty() << endl;
    //
    cout << arr3.at(1) << endl;



    // cout << arr[0];
    // cout << arrr[1];
    
    for(int i=0 ; i<arr3.size(); i++)   {
        cout << arr3[i] << endl;
    }

    return 0;

}