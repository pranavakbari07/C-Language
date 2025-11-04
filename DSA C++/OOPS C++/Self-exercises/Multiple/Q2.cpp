#include <iostream>
using namespace std;
#include <string.h>

//Mutiple inheritance

class vehicle1{
    public :
    void greet(){
        cout << "This is vehicle1..!" << endl;
    }
};

class vehicle2{
    public :
    void greet2(){
        cout << "This is vehicle2..!" << endl;
    }
};

class bike : public vehicle1,public vehicle2{
    public :
    void greet3(){
        cout << "This is bike..!";
    }
};

int main(){
    
    bike obj;
    obj.greet();
    obj.greet2();
    obj.greet3();

    return 0;
}