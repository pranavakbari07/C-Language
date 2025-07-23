#include <iostream>
using namespace std;
#include <string.h>

//Mutilevel inheritance

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

class sport : public bike{
    public :
    void greet3(){
        cout << "This is a sport bike..!";
    }
};

int main(){
    
    sport obj;
    obj.greet();
    obj.greet2();
    obj.greet3();

    return 0;
}