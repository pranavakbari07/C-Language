#include <iostream>
#include <string.h>
using namespace std;

class mobile{
   private : 
     int id;
     char brand[20];
     char model[20];
     int bugget;
     int ramrom;

    public :
     
    void setdata(){
        cout << "Enter your ID : ";
        cin >> this->id; 
        cout << "Enter your Brand : ";
        cin >> this->brand; 
        cout << "Enter your Model : ";
        cin >> this->model; 
        cout << "Enter your Bugget : ";
        cin >> this->bugget;
        cout << "Enter your Ram & Rom : ";
        cin >> this->ramrom;  
    }

    void getdata(){
        cout << "ID : " << this->id << endl;
        cout << "Brand : " << this->brand << endl;
        cout << "MOdel : " << this->model << endl;
        cout << "Bugget : " << this->bugget << endl;
        cout << "Ram & Rom : " << this->ramrom << endl;
    }
};

int main(){
    mobile one;
    one.setdata();
    one.getdata();
    mobile two;
    two.setdata();
    two.getdata();

    return 0;
}