#include <iostream>
using namespace std;

// UDF 1. TNRN

// void udf(){
//     cout << "Hello world !" << endl;
// };

// UDF 2.TSRN


// void sum(int num1, int num2){
//     cout << "the sum of two num : " << num1+num2 << endl;
// };


// void multiplay(int num1 , int num2){
//     cout << "the multiplay of two num : " << num1*num2 << endl;
// }


// void subtrack(int num1 , int num2){
//     cout << "the subtrack of two num : " << num1-num2;
// }

// 3. TNRS


// int multi(){
//     int a = 5;
//     return a*a;
// }

// int square(int a){

//     return a*a;
// }

int fact(int num){
    if(num <= 1){
        return 1;
    };
    return num * fact(num-1);
}

int main(){

    cout << "Enter a number to find factorial : ";

    int num;
    cin >> num;

    cout << "The factorial of " << num << " is " << fact(num);

    // cout << "square of 5 : " << multi();
    // int num;
    // cout << "Enter a number to get it's squre : ";
    // cin >> num;

    // cout << "square of : " << num << " : " << square(num);

//     cout << "Welcome to our calculator" << endl << endl;
//     cout << "Enter a choice" << endl;
//     cout << "1. Addition" << endl;
//     cout << "2. substraction" << endl;
//     cout << "3. multiplication" << endl;

//     int choice;

//     cin >> choice;

//     int num1;
//     int num2;

//     cout << "Enter value num1 : " << endl;
//     cin >> num1;
//     cout << "Enter value num2 : " << endl;
//     cin >> num2;

//     if(choice == 1){
//         sum(num1, num2);
//     }else if(choice == 2){
//         subtrack(num1,num2);
//     }else if (choice == 3){
//         multiplay(num1,num2);
//     }



    

    
    return 0;
}