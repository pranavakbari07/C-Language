#include <iostream>
using namespace std;
#include <string.h>

//Mutiple inheritance

class dog1{
    public :
    void greet(){
        cout << "This is dog1..!" << endl;
    }
};

class dog2{
    public :
    void greet2(){
        cout << "This is dog2..!" << endl;
    }
};

class puppy : public dog1,public dog2{
    public :
    void greet3(){
        cout << "This is puppy..!";
    }
};

int main(){
    
    puppy obj;
    obj.greet();
    obj.greet2();
    obj.greet3();

    return 0;
}