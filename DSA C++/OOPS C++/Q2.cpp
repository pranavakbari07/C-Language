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
    //    void setdata(int id, const char* name,const char* city, const char* subject,int age){
    //     this->id = id;
    //     strcpy(this->name,name);
    //     strcpy(this->city,city);
    //     this->age = age;
    //     strcpy(this->subject,subject);
    //    }

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
    student one[2];
    one[0].setdata();
    one[1].setdata();
    one[0].getdata();
    one[1].getdata();

}