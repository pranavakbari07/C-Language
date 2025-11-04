#include <iostream>
#include <string.h>
using namespace std;

class Furnicher{
   private : 
    int id;
    char name[20];
    char color[20];
    int bugget;
    char material[20];

   public : 
    void setdata(){
        cout << "Enter your ID : ";
        cin >> this->id;
        cout << "Enter Furnicher Name : ";
        cin >> this->name; 
        cout << "Enter your color : ";
        cin >> this->color; 
        cout << "Enter your bugget : ";
        cin >> this->bugget;
        cout << "Enter your Material : ";
        cin >> this->material;  
    } 

    void getdata(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "Color : " << this->color << endl;
        cout << "Bugget : " << this->bugget << endl;
        cout << "Material : " << this->material << endl << endl << endl; 
    }
};


int main(){
    Furnicher one;
    one.setdata();
    one.getdata();
    Furnicher two;
    two.setdata();
    two.getdata();


    return 0;
}