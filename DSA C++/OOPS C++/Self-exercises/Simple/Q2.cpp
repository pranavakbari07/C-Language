#include <iostream>
using namespace std;
#include <string.h>

//Simple/Single level inheritance

class vehicle{
    public :
    void greet(){
        cout << "This is a vehicle..!" << endl;
    }
};

class bike : public vehicle{
    public :
    void greet2(){
        cout << "This is a bike..!";
    }
};

int main(){
    
    bike obj;
    obj.greet();
    obj.greet2();

    return 0;
}