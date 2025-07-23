#include <iostream>
using namespace std;
#include <string.h>

//Hybrid inheritance

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

class cat : public animal{
    public :
    void greet3(){
        cout << "This is a cat..!" << endl;
    }
};

class cow : public dog,public cat{
    public :
    void greet4(){
        cout << "This is a cow..!" << endl;
    }
};

int main(){
    
    cow obj;
    obj.cat::greet();
    obj.greet2();
    obj.greet3();
    obj.greet4();

    return 0;
}