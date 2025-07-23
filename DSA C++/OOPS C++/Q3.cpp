#include <iostream>
#include <string.h>
using namespace std;

class student
{
    private :
      int id;
      char name[50];
      char city[50];
      char subject[50];
      int age;

      public :
    void setdata(){
        cout << "Enter your ID : ";
        cin >> this->id; 
        cout << "Enter your Name : ";
        cin >> this->name; 
        cout << "Enter your Age : ";
        cin >> this->age; 
        cout << "Enter your City : ";
        cin >> this->city;
        cout << "Enter your Subject : " << endl;
        cin >> this->subject;  
    }

       void getdata(){
        cout << "Id : " << this->id << endl;
        cout << "Name : " << this->name << endl;
        cout << "City : " << this->city << endl;
        cout << "Age : " << this->age << endl;
        cout << "Subject : " << this->subject << endl << endl;
       }
};

int main(){
    
    cout << "Welcome to student tegistraion portal !" << endl << endl;

    cout << "Enter the number of student you want to add : " << endl;
    int num;
    cin >> num;

    student obj[num];

    for(int i = 0; i<num; i++){
        obj[num].setdata();
    }

    cout << endl << endl;


    for(int i = 0; i<num; i++){
        obj[num].getdata();
    }

}