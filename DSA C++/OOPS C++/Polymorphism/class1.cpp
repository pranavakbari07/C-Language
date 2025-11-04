#include <iostream>
using namespace std;
#include <string.h>


// method over loading

// class calc{
//     public :

//      int sum(int a, int b){
//         cout << a + b << endl;
//      }
//      int sum(int a,int b ,int c){
//         cout << a + b + c << endl;
//      }
// };


//method overriding

class shape
{

public:
    void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};

class circle : public shape{
    public : 

     void draw(){
        cout << "Drawing a circle" << endl;
     }
};

int main()
{

 // method over loading


    // calc obj;

    // obj.sum(12,12);
    // obj.sum(12,12,12);

 //method overriding

    circle obj;

    obj.draw();
}
