#include <iostream>
using namespace std;
#include <string.h>

//Mutilevel inheritance

class animal{
    public :
    void greet(){
        cout << "This is a animal..!" << endl;
    }
};

class dog : public animal{
    public :
    void greet2(){
        cout << "This is a dog..!" << endl;
    }
};

class husky : public dog{
    public :
    void greet3(){
        cout << "This is a husky dog..!";
    }
};

int main(){
    
    husky obj;
    obj.greet();
    obj.greet2();
    obj.greet3();

    return 0;
}