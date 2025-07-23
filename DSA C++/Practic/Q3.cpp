#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout << "Enter a value for a :";
    cin >> a;

    cout << "Enter a value for b :";
    cin >> b;

    // if (a>b)
    // {
    //     cout << "A is max";
    // }else{
    //     cout << "b is max";
    // }


    (a>b) ? cout << "a is max" : cout << "b is max" << endl;

    (a%2==0) ? cout << "a is even" : cout << "a is odd";
    
}