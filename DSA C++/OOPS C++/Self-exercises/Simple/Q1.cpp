#include <iostream>
using namespace std;
#include <string.h>

//Simple/Single level inheritance

class animal{
    public :
    void greet(){
        cout << "This is a animal..!" << endl;
    }
};

class cat : public animal{
    public :
    void greet2(){
        cout << "This is a cat..!";
    }
};

int main(){
    
    cat obj;
    obj.greet();
    obj.greet2();

    return 0;
}