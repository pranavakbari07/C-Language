#include <iostream>
#include <string.h>
using namespace std;

class person{

     private :
      char name[50];
      int age;
      char city[50];

    public :
     person(const char* name, int age , const char* city){
        strcpy(this->name,name);
        this->age = age;
        strcpy(this->city,city);
     }

    person(){
        cout << "Enter Your Name : ";
        cin >> this->name;
        cout << "Enter Your Age : ";
        cin >> this->age;
        cout << "Enter Your City : ";
        cin >> this->city;
    }

    void getdata(){
        cout << this->name << endl;
        cout << this->age << endl;
        cout << this->city << endl;
     }

     ~person(){
        cout << "Thank you for visiting our program" ;
     }
};

int main(){
    person obj("Rahul",18, "Rajkot");
    // person obj();


    obj.getdata();

    return 0;
}
