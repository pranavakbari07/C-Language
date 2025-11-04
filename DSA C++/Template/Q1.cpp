#include <iostream>
#include <string.h>
using namespace std;

template <typename T1,typename T2,typename T3>
class person{
    public : 

     T1 id;
     T1 age;
     T2 intrest;
     T3 name[20];

     T1 setdata(T1 id,T1 age,T2 intrest, const *T3 name){
        this->id;
        this->age;
        this->intrest;
        strcpy(this->name ,name);
     }

     T1 getdata

     
};


// template <typename T>
// T sum(T a,T b){
//     cout << "Sum of a and b is : " << a + b << endl;
// };

// int summ(int a, int b){
//     cout << "Sum of a and b is : " << a + b;
// }

int main(){

    // sum(12.5,12.5);
    // summ(12.5,12.5);

}