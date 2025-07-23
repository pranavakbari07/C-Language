#include <iostream>
using namespace std;
#include <string.h>

//Hybrid inheritance

class vehicle{
    public :
    void greet(){
        cout << "This is a vehicle..!" << endl;
    }
};

class bike : public vehicle{
    public :
    void greet2(){
        cout << "This is a bike..!" << endl;
    }
};

class car : public vehicle{
    public :
    void greet3(){
        cout << "This is a car..!" << endl;
    }
};

class bus : public bike,public car{
    public :
    void greet4(){
        cout << "This is a bus..!" << endl;
    }
};

int main(){
    
    bus obj;
    obj.car::greet();
    obj.greet2();
    obj.greet3();
    obj.greet4();

    return 0;
}